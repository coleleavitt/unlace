void __fastcall sub_1C39030(__int64 a1, __int64 a2, unsigned __int8 (__fastcall *a3)(void **, __int64 *))
{
  __int64 *v3; // r13
  __int64 *v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // r13
  unsigned __int64 v10; // r14
  int v11; // ecx
  void *v12; // rax
  __int64 *v13; // r13
  void *v14; // rdi
  __int64 v15; // rax
  void **v16; // r14
  unsigned __int64 v17; // [rsp+0h] [rbp-78h]
  __int64 v18; // [rsp+8h] [rbp-70h]
  int v19; // [rsp+10h] [rbp-68h]
  char v20; // [rsp+17h] [rbp-61h]
  __int64 v21; // [rsp+18h] [rbp-60h]
  void *v22; // [rsp+20h] [rbp-58h] BYREF
  int v23; // [rsp+28h] [rbp-50h]
  char v24; // [rsp+2Ch] [rbp-4Ch]
  __int64 v25; // [rsp+30h] [rbp-48h]

  if ( a1 != a2 )
  {
    v3 = (__int64 *)(a1 + 24);
    if ( a2 != a1 + 24 )
    {
      v17 = a1 + ((a2 - 48 - a1) & 0xFFFFFFFFFFFFFFF8LL) + 48;
      do
      {
        v6 = v3 + 3;
        if ( a3((void **)v3, (__int64 *)a1) )
        {
          v19 = *((_DWORD *)v3 + 2);
          v7 = *v3;
          v8 = (__int64)v3 - a1;
          *((_DWORD *)v3 + 2) = 0;
          v9 = v3 + 3;
          v18 = v7;
          v20 = *((_BYTE *)v6 - 12);
          v10 = 0xAAAAAAAAAAAAAAABLL * (v8 >> 3);
          v21 = *(v6 - 1);
          if ( v8 > 0 )
          {
            do
            {
              v9 -= 3;
              if ( *((_DWORD *)v9 + 2) > 0x40u && *v9 )
                operator delete[]((void *)*v9);
              *v9 = *(v9 - 3);
              v11 = *((_DWORD *)v9 - 4);
              *((_DWORD *)v9 - 4) = 0;
              *((_DWORD *)v9 + 2) = v11;
              *((_BYTE *)v9 + 12) = *((_BYTE *)v9 - 12);
              v9[2] = *(v9 - 1);
              --v10;
            }
            while ( v10 );
          }
          if ( *(_DWORD *)(a1 + 8) > 0x40u )
          {
            if ( *(_QWORD *)a1 )
              operator delete[](*(void **)a1);
          }
          *(_QWORD *)a1 = v18;
          *(_DWORD *)(a1 + 8) = v19;
          *(_BYTE *)(a1 + 12) = v20;
          *(_QWORD *)(a1 + 16) = v21;
        }
        else
        {
          v23 = *((_DWORD *)v3 + 2);
          v12 = (void *)*v3;
          v13 = v3 - 3;
          *((_DWORD *)v6 - 4) = 0;
          v22 = v12;
          v24 = *((_BYTE *)v6 - 12);
          v25 = *(v6 - 1);
          while ( 1 )
          {
            v16 = (void **)(v13 + 3);
            if ( !a3(&v22, v13) )
              break;
            if ( *((_DWORD *)v13 + 8) > 0x40u )
            {
              v14 = (void *)v13[3];
              if ( v14 )
                operator delete[](v14);
            }
            v15 = *v13;
            v13 -= 3;
            v13[6] = v15;
            LODWORD(v15) = *((_DWORD *)v13 + 8);
            *((_DWORD *)v13 + 8) = 0;
            *((_DWORD *)v13 + 14) = v15;
            *((_BYTE *)v13 + 60) = *((_BYTE *)v13 + 36);
            v13[8] = v13[5];
          }
          if ( *((_DWORD *)v13 + 8) > 0x40u && *v16 )
            operator delete[](*v16);
          *v16 = v22;
          *((_DWORD *)v13 + 8) = v23;
          *((_BYTE *)v13 + 36) = v24;
          v13[5] = v25;
        }
        v3 = v6;
      }
      while ( v6 != (__int64 *)v17 );
    }
  }
}
