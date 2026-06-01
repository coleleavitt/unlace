/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100051F70
// Address: 0x0000000100051F70

//----- (0000000100051F70) ----------------------------------------------------
__int64 __fastcall sub_100051F70(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v4; // rcx
  unsigned __int64 v5; // rax
  const char *v6; // rsi
  char *v7; // r9
  unsigned int v8; // r15d
  __int64 v9; // r8
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // r15
  int v13; // ebx
  size_t v14; // rax
  size_t v15; // r12
  unsigned __int64 v16; // r13
  void *v17; // rax
  __int64 v19; // [rsp+8h] [rbp-4E8h]
  const char *v20; // [rsp+10h] [rbp-4E0h]
  __int128 v21; // [rsp+20h] [rbp-4D0h] BYREF
  __int64 v22; // [rsp+30h] [rbp-4C0h]
  __int64 (__fastcall **v23)(); // [rsp+40h] [rbp-4B0h] BYREF
  char __s[1128]; // [rsp+48h] [rbp-4A8h] BYREF
  __int64 v25; // [rsp+4B0h] [rbp-40h]
  int v26; // [rsp+4B8h] [rbp-38h]

  v4 = *(const char **)a2;
  v5 = *(unsigned __int16 *)(a2 + 36);
  v21 = 0;
  v22 = 0;
  v6 = _s1;
  v7 = (char *)_s1;
  if ( !v5 )
  {
LABEL_13:
    if ( *(_QWORD *)(a3 + 8) )
      v6 = *(const char **)a3;
    v13 = *(_DWORD *)(a2 + 24);
    sub_10005C790((__int64)&v23, (__int64)v6, 0, v4, (const char *)(a2 + 1062), 0, v7);
    v23 = off_1000A9778;
    v25 = a2 + 28;
    v26 = v13;
    if ( (unsigned int)sub_1000521F0(&v23) )
    {
      v8 = 0;
      if ( a1 )
      {
        v14 = strlen(__s);
        if ( v14 )
        {
          v15 = v14;
          v16 = v14 + 1;
          v17 = *(void **)a1;
          if ( *(_QWORD *)(a1 + 16) < v16 )
          {
            v17 = qvector_reserve(a1, *(void **)a1, v16, 1u);
            *(_QWORD *)a1 = v17;
          }
          *(_QWORD *)(a1 + 8) = v16;
          memmove(v17, __s, v15);
          *(_BYTE *)(*(_QWORD *)a1 + v15) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 8) = 0;
        }
      }
    }
    else
    {
      v8 = -1;
    }
    sub_10005CDB0(&v23);
    if ( (_QWORD)v21 )
    {
      *((_QWORD *)&v21 + 1) = 0;
      qfree((void *)v21);
    }
    return v8;
  }
  v8 = -1;
  if ( (unsigned __int16)v5 >= 0xCu )
  {
    v9 = _byteswap_ulong(*(_DWORD *)(a2 + 38));
    v10 = _byteswap_ulong(*(_DWORD *)(a2 + 42));
    if ( !*(_BYTE *)(a2 + 28) )
    {
      v9 = *(unsigned int *)(a2 + 38);
      v10 = *(unsigned int *)(a2 + 42);
    }
    if ( v9 + v10 + 12 <= v5 )
    {
      v7 = (char *)_s1;
      if ( v10 )
      {
        v19 = a3;
        v20 = v4;
        v11 = a2 + v9 + 50;
        v12 = 0;
        do
          sub_10002DCA0((__int64)&v21, "%02x", *(unsigned __int8 *)(v11 + v12++));
        while ( (_DWORD)v10 != (_DWORD)v12 );
        if ( *((_QWORD *)&v21 + 1) )
          v7 = (char *)v21;
        else
          v7 = (char *)_s1;
        v4 = v20;
        a3 = v19;
        v6 = _s1;
      }
      goto LABEL_13;
    }
  }
  return v8;
}
// 1000A9778: using guessed type __int64 (__fastcall *off_1000A9778[2])();
