__int64 __fastcall sub_22E90(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  int v10; // r14d
  bool v11; // r15
  unsigned int *v12; // rax
  unsigned int *v13; // rax
  __int64 v14; // rbx
  void *v15; // rsi
  char v16; // [rsp+Fh] [rbp-2F9h]
  void *src; // [rsp+10h] [rbp-2F8h] BYREF
  __int128 v18; // [rsp+18h] [rbp-2F0h]
  __int64 v19; // [rsp+30h] [rbp-2D8h] BYREF
  __int128 v20; // [rsp+38h] [rbp-2D0h]
  _BYTE v21[32]; // [rsp+50h] [rbp-2B8h] BYREF
  __int64 v22; // [rsp+70h] [rbp-298h]
  __int64 v23; // [rsp+78h] [rbp-290h]
  __int64 v24[4]; // [rsp+A0h] [rbp-268h] BYREF
  __int64 v25; // [rsp+C0h] [rbp-248h]
  __int64 v26; // [rsp+C8h] [rbp-240h]
  __int64 v27; // [rsp+170h] [rbp-198h]
  __int64 v28; // [rsp+178h] [rbp-190h]
  bool (__fastcall *v29)(__int64, int); // [rsp+240h] [rbp-C8h]
  __int64 v30; // [rsp+290h] [rbp-78h]
  __int64 v31; // [rsp+298h] [rbp-70h]
  __int64 v32; // [rsp+2A8h] [rbp-60h]
  char v33; // [rsp+2B8h] [rbp-50h]
  unsigned __int64 v34; // [rsp+2C8h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  sub_17FA0((__int64)v21, a2, 0);
  v29 = sub_12FB0;
  if ( (unsigned __int8)sub_18180((__int64)v21)
    && (unsigned __int8)sub_186E0((__int64)v21)
    && (v2 = sub_20BC0((__int64)v21), (_BYTE)v2) )
  {
    v10 = sub_17880((__int64)v21);
    v18 = 0;
    src = nullptr;
    v16 = v33;
    v19 = 0;
    v20 = 0;
    if ( sub_20540((__int64)v24, 1, ".debug_info") || sub_20540((__int64)v24, 1879048222, ".debug_info") )
      v11 = v2;
    else
      v11 = sub_20540((__int64)v24, 1, ".zdebug_info") != nullptr;
    v12 = sub_20540((__int64)v24, 7, ".note.gnu.build-id");
    if ( (v12 || (v12 = sub_20540((__int64)v24, 7, ".note.go.buildid")) != nullptr) && *((_QWORD *)v12 + 4) <= 0xFFFFu )
      sub_22C60(v24, (__int64 *)&src, (__int64)v12);
    v13 = sub_20540((__int64)v24, 1, ".gnu_debuglink");
    if ( v13 )
      sub_20220((__int64)v21, &v19, *((_QWORD *)v13 + 3));
    if ( (unsigned __int64)v20 > 1 )
      qstrncpy(a1 + 1034, v19, 4096);
    else
      *(_BYTE *)(a1 + 1034) = 0;
    v14 = v18;
    v15 = src;
    *(_DWORD *)(a1 + 4) = v10;
    if ( (unsigned __int64)(int)v14 > 0x400 )
    {
      *(_WORD *)(a1 + 8) = 1024;
      memmove((void *)(a1 + 10), v15, 0x400u);
      *(_BYTE *)(a1 + 1) = v11;
      *(_BYTE *)a1 = v16;
    }
    else
    {
      *(_WORD *)(a1 + 8) = v14;
      memmove((void *)(a1 + 10), v15, (int)v14);
      *(_BYTE *)(a1 + 1) = v11;
      *(_BYTE *)a1 = v16;
      if ( !v14 && !v11 )
        LOBYTE(v2) = (unsigned __int64)v20 > 1;
    }
    if ( v19 )
    {
      *(_QWORD *)&v20 = 0;
      qfree(v19);
    }
    if ( src )
    {
      *(_QWORD *)&v18 = 0;
      qfree(src);
    }
  }
  else
  {
    v2 = 0;
  }
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
  if ( v30 )
  {
    v31 = 0;
    qfree(v30);
  }
  v3 = v27;
  if ( v27 )
  {
    v4 = v28;
    if ( v28 )
    {
      v5 = 0;
      do
      {
        v6 = (__int64 *)(v3 + 96 * v5);
        v7 = v6[3];
        if ( v7 )
        {
          v6[4] = 0;
          qfree(v7);
        }
        v8 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v8);
        }
        ++v5;
        v3 = v27;
      }
      while ( v4 != v5 );
    }
    v28 = 0;
    qfree(v3);
  }
  if ( v25 )
  {
    v26 = 0;
    qfree(v25);
  }
  if ( v22 )
  {
    v23 = 0;
    qfree(v22);
  }
  return v2;
}
