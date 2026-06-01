/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: copy_idcv
// Address: 0x0000000000071D30

//----- (0000000000071D30) ----------------------------------------------------
__int64 __fastcall copy_idcv(char *a1, char *a2, double a3, __m128 a4)
{
  char *v4; // rbx
  char *v5; // rax
  int v6; // eax
  size_t v8; // r15
  _QWORD *v9; // rbx
  void *v10; // rax
  __int64 v11; // rax

  if ( a1 != a2 )
  {
    v4 = a1;
    if ( *a1 == 10 )
    {
      v5 = deref_idcv(a1, 1, a3, a4);
      if ( !v5 )
        return get_qerrno();
      v4 = v5;
    }
    free_idcv(v4, a3, a4);
    v6 = *a2;
    *v4 = v6;
    switch ( v6 )
    {
      case 2:
      case 8:
      case 9:
        *((_QWORD *)v4 + 1) = *((_QWORD *)a2 + 1);
        break;
      case 3:
      case 10:
        *(_OWORD *)(v4 + 8) = *(_OWORD *)(a2 + 8);
        break;
      case 5:
        v11 = *((_QWORD *)a2 + 1);
        *((_QWORD *)v4 + 1) = v11;
        ++*(_DWORD *)(v11 + 24);
        break;
      case 6:
        *((_DWORD *)v4 + 2) = *((_DWORD *)a2 + 2);
        break;
      case 7:
        *(_OWORD *)(v4 + 8) = 0;
        *((_QWORD *)v4 + 3) = 0;
        v8 = *((_QWORD *)a2 + 2);
        if ( v8 )
        {
          v9 = v4 + 8;
          v10 = qalloc_or_throw(*((_QWORD *)a2 + 2));
          *v9 = v10;
          v9[2] = v8;
          memcpy(v10, *((const void **)a2 + 1), v8);
          v9[1] = v8;
        }
        break;
      default:
        if ( !(_BYTE)under_debugger )
          interr(283);
        BUG();
    }
  }
  return 0;
}
// 158B40: using guessed type __int64 under_debugger;
