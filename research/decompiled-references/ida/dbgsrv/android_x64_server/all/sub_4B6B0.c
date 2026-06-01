/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B6B0
// Address: 0x000000000004B6B0

//----- (000000000004B6B0) ----------------------------------------------------
void __fastcall sub_4B6B0(int *a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned __int8 *v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r15
  void **v7; // r12
  void *v8; // rdi
  unsigned __int64 v9; // r15
  void **v10; // r12
  void *v11; // rdi
  __int64 v12; // rcx

  v3 = *a1;
  if ( *a1 == 3 )
  {
    (*((void (__fastcall **)(__int64, __int64, _QWORD))a1 + 2))(a3, a2, *((_QWORD *)a1 + 4));
  }
  else
  {
    v4 = (unsigned __int8 *)(*((_QWORD *)a1 + 2) + a3);
    switch ( v3 )
    {
      case 2:
        v6 = *((_QWORD *)a1 + 3);
        v7 = (void **)(a2 + 8);
        if ( *(int *)a2 >= -1 )
        {
          v8 = *v7;
          if ( *v7 )
          {
            *(_QWORD *)(a2 + 16) = 0;
            qfree(v8);
            *(_QWORD *)(a2 + 8) = 0;
            *(_QWORD *)(a2 + 24) = 0;
          }
          *(_DWORD *)a2 = -2;
        }
        sub_4B610(a2 + 8, v4, v6);
        *(_DWORD *)a2 = 0;
        break;
      case 1:
        v9 = *((_QWORD *)a1 + 3);
        v10 = (void **)(a2 + 8);
        if ( *(int *)a2 >= -1 )
        {
          v11 = *v10;
          if ( *v10 )
          {
            *(_QWORD *)(a2 + 16) = 0;
            qfree(v11);
            *(_QWORD *)(a2 + 8) = 0;
            *(_QWORD *)(a2 + 24) = 0;
          }
          *(_DWORD *)a2 = -2;
        }
        sub_4B610(a2 + 8, v4, v9);
        *(_DWORD *)a2 = -1;
        break;
      case 0:
        v5 = 0;
        switch ( *((_QWORD *)a1 + 3) )
        {
          case 1LL:
            v5 = *v4;
            break;
          case 2LL:
            v5 = *(unsigned __int16 *)v4;
            break;
          case 4LL:
            v5 = *(unsigned int *)v4;
            break;
          case 8LL:
            v5 = *(_QWORD *)v4;
            break;
          default:
            break;
        }
        v12 = *((_QWORD *)a1 + 4);
        switch ( v12 )
        {
          case 4LL:
            v5 = (unsigned int)v5;
            break;
          case 2LL:
            v5 = (unsigned __int16)v5;
            break;
          case 1LL:
            v5 = (unsigned __int8)v5;
            break;
        }
        *(_QWORD *)(a2 + 8) = v5;
        break;
    }
  }
}
