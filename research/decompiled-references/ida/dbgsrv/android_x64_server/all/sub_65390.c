/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65390
// Address: 0x0000000000065390

//----- (0000000000065390) ----------------------------------------------------
__int64 __fastcall sub_65390(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r15
  __int64 v4; // r12
  size_t v5; // rbx
  void *v6; // rax
  _DWORD *v7; // r15
  __int64 v8; // rsi
  _QWORD *v9; // r15
  __int64 v10; // r12
  size_t v11; // rbx
  _DWORD *v12; // rbx
  __int64 v13; // rsi
  void *v14; // rax

  if ( a1 != a2 )
  {
    sub_652B0((int *)a1);
    switch ( *(_DWORD *)a2 )
    {
      case 1:
        v3 = operator new(0x18u);
        v4 = *(_QWORD *)(a2 + 16);
        *(_OWORD *)v3 = 0;
        v3[2] = 0;
        v5 = *(_QWORD *)(v4 + 8);
        if ( v5 )
        {
          v6 = qalloc_or_throw(*(_QWORD *)(v4 + 8));
          *v3 = v6;
          v3[2] = v5;
          memcpy(v6, *(const void **)v4, v5);
          v3[1] = v5;
        }
        *(_QWORD *)(a1 + 16) = v3;
        return a1;
      case 2:
        *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
        goto LABEL_9;
      case 3:
      case 4:
LABEL_9:
        v12 = operator new(0x20u);
        v13 = *(_QWORD *)(a2 + 16);
        *v12 = 0;
        v12[6] = 0;
        sub_65390(v12, v13);
        *(_QWORD *)(a1 + 16) = v12;
        v9 = qalloc_or_throw(24);
        v10 = *(_QWORD *)(a2 + 8);
        *(_OWORD *)v9 = 0;
        v9[2] = 0;
        v11 = *(_QWORD *)(v10 + 8);
        if ( v11 )
          goto LABEL_10;
        goto LABEL_11;
      case 5:
        v7 = operator new(0x20u);
        v8 = *(_QWORD *)(a2 + 16);
        *v7 = 0;
        v7[6] = 0;
        sub_65390(v7, v8);
        *(_QWORD *)(a1 + 16) = v7;
        v9 = operator new(0x18u);
        v10 = *(_QWORD *)(a2 + 8);
        *(_OWORD *)v9 = 0;
        v9[2] = 0;
        v11 = *(_QWORD *)(v10 + 8);
        if ( v11 )
        {
LABEL_10:
          v14 = qalloc_or_throw(*(_QWORD *)(v10 + 8));
          *v9 = v14;
          v9[2] = v11;
          memcpy(v14, *(const void **)v10, v11);
          v9[1] = v11;
        }
LABEL_11:
        *(_QWORD *)(a1 + 8) = v9;
        break;
      default:
        return a1;
    }
  }
  return a1;
}
