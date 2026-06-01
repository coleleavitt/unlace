void __fastcall sub_1C32FF0(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  char v3; // r14
  unsigned int v4; // eax
  unsigned __int64 v5; // r15
  unsigned int v6; // eax
  int v7; // eax
  __int64 *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // rbx
  unsigned __int64 v12; // r12
  int v13; // edx
  int v14; // eax
  __int64 *v15; // r12
  __int64 v16; // rax
  __int64 *v17; // r13
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // [rsp+14h] [rbp-64h]
  int v23; // [rsp+14h] [rbp-64h]
  __int64 v24; // [rsp+18h] [rbp-60h]
  __int64 v25; // [rsp+18h] [rbp-60h]
  __int64 v26; // [rsp+20h] [rbp-58h] BYREF
  int v27; // [rsp+28h] [rbp-50h]
  char v28; // [rsp+2Ch] [rbp-4Ch]
  unsigned __int64 v29; // [rsp+30h] [rbp-48h]

  if ( (__int64 *)a1 != a2 )
  {
    v2 = (__int64 *)(a1 + 24);
    if ( a2 != (__int64 *)(a1 + 24) )
    {
      do
      {
        v3 = *((_BYTE *)v2 + 12);
        if ( v3 )
          v4 = (unsigned int)sub_2205DB0(v2, a1) >> 31;
        else
          v4 = (unsigned int)sub_2205E20(v2, a1) >> 31;
        v5 = v2[2];
        if ( !(_BYTE)v4
          && (!*(_BYTE *)(a1 + 12)
            ? (v6 = (unsigned int)sub_2205E20(a1, v2) >> 31)
            : (v6 = (unsigned int)sub_2205DB0(a1, v2) >> 31),
              (_BYTE)v6 || *(_QWORD *)(a1 + 16) <= v5) )
        {
          v14 = *((_DWORD *)v2 + 2);
          v28 = v3;
          v15 = v2 - 3;
          *((_DWORD *)v2 + 2) = 0;
          v23 = v14;
          v27 = v14;
          v16 = *v2;
          v29 = v5;
          v25 = v16;
          v26 = v16;
          if ( v3 )
          {
            while ( 1 )
            {
              v17 = v15 + 3;
              if ( (int)sub_2205DB0(&v26, v15) >= 0 )
              {
                v19 = *((_BYTE *)v15 + 12)
                    ? (unsigned int)sub_2205DB0(v15, &v26) >> 31
                    : (unsigned int)sub_2205E20(v15, &v26) >> 31;
                if ( (_BYTE)v19 || v5 >= v15[2] )
                  break;
              }
              v20 = *v15;
              v15 -= 3;
              v15[6] = v20;
              LODWORD(v20) = *((_DWORD *)v15 + 8);
              *((_DWORD *)v15 + 8) = 0;
              *((_DWORD *)v15 + 14) = v20;
              *((_BYTE *)v15 + 60) = *((_BYTE *)v15 + 36);
              v15[8] = v15[5];
            }
          }
          else
          {
            while ( 1 )
            {
              v17 = v15 + 3;
              if ( (int)sub_2205E20(&v26, v15) >= 0 )
              {
                v18 = *((_BYTE *)v15 + 12)
                    ? (unsigned int)sub_2205DB0(v15, &v26) >> 31
                    : (unsigned int)sub_2205E20(v15, &v26) >> 31;
                if ( (_BYTE)v18 || v15[2] <= v5 )
                  break;
              }
              v21 = *v15;
              v15 -= 3;
              v15[6] = v21;
              LODWORD(v21) = *((_DWORD *)v15 + 8);
              *((_DWORD *)v15 + 8) = 0;
              *((_DWORD *)v15 + 14) = v21;
              *((_BYTE *)v15 + 60) = *((_BYTE *)v15 + 36);
              v15[8] = v15[5];
            }
          }
          *((_BYTE *)v17 + 12) = v3;
          v17[2] = v5;
          *v17 = v25;
          *((_DWORD *)v17 + 2) = v23;
          v8 = v2 + 3;
        }
        else
        {
          v7 = *((_DWORD *)v2 + 2);
          v8 = v2 + 3;
          v9 = (__int64)v2 - a1;
          *((_DWORD *)v2 + 2) = 0;
          v22 = v7;
          v10 = *v2;
          v11 = v2 + 3;
          v24 = v10;
          v12 = 0xAAAAAAAAAAAAAAABLL * (v9 >> 3);
          if ( v9 > 0 )
          {
            do
            {
              v11 -= 3;
              if ( *((_DWORD *)v11 + 2) > 0x40u && *v11 )
                operator delete[]((void *)*v11);
              *v11 = *(v11 - 3);
              v13 = *((_DWORD *)v11 - 4);
              *((_DWORD *)v11 - 4) = 0;
              *((_DWORD *)v11 + 2) = v13;
              *((_BYTE *)v11 + 12) = *((_BYTE *)v11 - 12);
              v11[2] = *(v11 - 1);
              --v12;
            }
            while ( v12 );
          }
          if ( *(_DWORD *)(a1 + 8) > 0x40u )
          {
            if ( *(_QWORD *)a1 )
              operator delete[](*(void **)a1);
          }
          *(_BYTE *)(a1 + 12) = v3;
          *(_QWORD *)(a1 + 16) = v5;
          *(_QWORD *)a1 = v24;
          *(_DWORD *)(a1 + 8) = v22;
        }
        v2 = v8;
      }
      while ( a2 != v8 );
    }
  }
}
