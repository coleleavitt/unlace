char __fastcall sub_814360(_QWORD *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // r15
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rdx
  unsigned int v10; // r13d
  __int64 v11; // r8
  __int64 v12; // r15
  __int64 v13; // rbx
  unsigned int v14; // esi
  int v15; // ebp
  unsigned int v16; // r11d
  __int64 v17; // rcx
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // r8d
  char v22; // [rsp-10h] [rbp-58h]

  v5 = a5;
  LOBYTE(v7) = sub_813A50(a1, a2, a3);
  if ( (_BYTE)v7 )
  {
    v7 = a1[75];
    v8 = 8LL * a4;
    v9 = *(_QWORD *)(v7 + v8);
    if ( v9 )
    {
      v10 = *(_DWORD *)(v9 - 4);
      if ( v10 != 1 )
      {
        v11 = a1[3];
        if ( *(_BYTE *)(v11 + 3184) != 1 )
        {
          if ( v10 )
          {
            v12 = 8 * v5;
            v13 = 0;
            while ( 1 )
            {
              v14 = *(_DWORD *)(v9 + 4 * v13);
              v15 = v13;
              LODWORD(v7) = *(_DWORD *)(*(_QWORD *)(v7 + v12) + 4 * v13);
              v16 = v7 ^ 1;
              if ( v14 == ((unsigned int)v7 ^ 1) )
              {
                LOBYTE(v7) = sub_80EE70((__int64)a1);
                return v7;
              }
              v17 = *(_QWORD *)(v11 + 3288);
              v18 = *(_DWORD *)(v17 + 4LL * v14);
              v19 = *(_DWORD *)(v17 + 4LL * (unsigned int)v7);
              if ( v18 == v19 )
                goto LABEL_10;
              if ( v18 != -1 )
                break;
              v20 = v13++;
              LOBYTE(v7) = sub_813EE0((__int64)a1, v16, a4, a5, v20, v14 ^ 1, 1);
              v11 = a1[3];
              if ( v15 + 1 >= v10 )
                return v7;
LABEL_11:
              if ( *(_BYTE *)(v11 + 3184) == 1 )
                return v7;
              v7 = a1[75];
              v9 = *(_QWORD *)(v7 + v8);
            }
            if ( v18 == 1 )
            {
              LOBYTE(v7) = sub_813EE0((__int64)a1, v7, a4, a5, v13, v14, 1);
              v11 = a1[3];
            }
            else
            {
              if ( v19 == -1 )
              {
                sub_813EE0((__int64)a1, v14 ^ 1, a5, a4, v13, v16, 1);
              }
              else
              {
                if ( v19 != 1 )
                  goto LABEL_10;
                sub_813EE0((__int64)a1, v14, a5, a4, v13, v7, 1);
              }
              LOBYTE(v7) = v22;
              v11 = a1[3];
            }
LABEL_10:
            ++v13;
            if ( v15 + 1 >= v10 )
              return v7;
            goto LABEL_11;
          }
        }
      }
    }
  }
  return v7;
}

