void __fastcall sub_8EDF90(_QWORD *a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int ***v4; // r8
  unsigned int ***v7; // r14
  unsigned int **v8; // rax
  unsigned int *v9; // r13
  unsigned int *v10; // rbx
  __int64 v11; // rdi
  unsigned int v12; // r15d
  unsigned int v13; // eax
  unsigned int ***v14; // [rsp+8h] [rbp-50h]
  char v16; // [rsp+1Eh] [rbp-3Ah]
  bool v17; // [rsp+1Fh] [rbp-39h]

  v4 = *(unsigned int ****)(a2 + 56);
  if ( v4 )
  {
    v14 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 != v14 )
    {
      v7 = *(unsigned int ****)(a2 + 56);
      v17 = a4 == -1;
      while ( 1 )
      {
        v8 = *v7;
        if ( (*((_BYTE *)*v7 + 44) & 0x10) == 0
          || *(_BYTE *)(a1[1106] + (unsigned int)(2 * *(_DWORD *)(a1[1104] + 4LL * **v8))) != 0xFF )
        {
          goto LABEL_4;
        }
        v9 = v8[15];
        v10 = v8[14];
        v11 = *((_QWORD *)v9 + 1);
        if ( v11 == *(_QWORD *)(a2 + 8) )
        {
          v11 = *((_QWORD *)v10 + 1);
          v10 = v8[15];
          v9 = v8[14];
        }
        v16 = *(_BYTE *)(a1[14] + 561LL);
        if ( !v16 )
          break;
        if ( a4 == -1 )
        {
LABEL_4:
          if ( v14 == ++v7 )
            return;
        }
        else
        {
          while ( 1 )
          {
            v12 = sub_B39350(v9, a4);
            if ( v12 != -1 )
              break;
            v9 = *((unsigned int **)v9 + 10);
            if ( !v9 )
            {
              v16 = 0;
              break;
            }
          }
LABEL_14:
          if ( *(_BYTE *)(a1[14] + 561LL) == 1 && !v17 && v10 )
          {
            while ( 1 )
            {
              v13 = sub_B39350(v10, a4);
              if ( v13 != -1 )
                break;
              v10 = *((unsigned int **)v10 + 10);
              if ( !v10 )
                goto LABEL_21;
            }
            a3 = v13;
          }
LABEL_21:
          if ( v12 == a3 || !v16 )
            goto LABEL_4;
          ++v7;
          sub_8EDB70((__int64)a1, a4, a3, v12);
          if ( v14 == v7 )
            return;
        }
      }
      v12 = sub_B39350(v11, a4);
      v16 = v12 != -1;
      goto LABEL_14;
    }
  }
}

