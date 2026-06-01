void __fastcall sub_1A86C80(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  int v9; // eax
  int v10; // [rsp+0h] [rbp-6Ch]
  void *v11; // [rsp+4h] [rbp-68h] BYREF
  unsigned int v12; // [rsp+Ch] [rbp-60h]
  char v13; // [rsp+10h] [rbp-5Ch]
  void *v14[2]; // [rsp+14h] [rbp-58h] BYREF
  __int64 v15; // [rsp+24h] [rbp-48h]
  void *v16; // [rsp+34h] [rbp-38h] BYREF
  int v17; // [rsp+3Ch] [rbp-30h]
  char v18; // [rsp+40h] [rbp-2Ch]
  char v19; // [rsp+44h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( !*(_BYTE *)(a1 + 24) && ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 0x15 )
    {
      v3 = *(_QWORD *)(a2 + 16);
      if ( v3 )
      {
        if ( (*(_WORD *)v3 & 0x1FF) == 0x47 && v2 == *(_QWORD *)(v3 + 16) )
        {
          v4 = *(_QWORD *)(a2 + 24);
          if ( v4 )
          {
            v5 = sub_BFD550(v4);
            v15 = 0;
            *(_OWORD *)v14 = 0;
            if ( v5 )
            {
              sub_C3EB00((__int64)&v16, v5, *(_QWORD *)a1, nullptr, v6, v7);
              if ( !v19 )
                goto LABEL_10;
              v8 = v17;
              LOBYTE(v15) = 1;
              v17 = 0;
              LODWORD(v14[1]) = v8;
              v14[0] = v16;
              BYTE4(v14[1]) = v18;
              v12 = 64;
              v13 = 0;
              v11 = nullptr;
              v9 = sub_98E2D0((__int64 *)v14, (__int64 *)&v11);
              if ( v12 > 0x40 )
              {
                if ( v11 )
                {
                  v10 = v9;
                  operator delete[](v11);
                  v9 = v10;
                }
              }
              if ( v9 )
LABEL_10:
                *(_BYTE *)(a1 + 24) = 0;
              else
                *(_BYTE *)(a1 + 24) = 1;
              sub_98E4B0((__int64)&v16);
            }
            sub_98E4B0((__int64)v14);
          }
        }
      }
    }
  }
}
