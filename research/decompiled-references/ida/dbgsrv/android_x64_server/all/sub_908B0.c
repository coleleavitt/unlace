/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_908B0
// Address: 0x00000000000908B0

//----- (00000000000908B0) ----------------------------------------------------
__int64 __fastcall sub_908B0(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v5; // rcx
  unsigned __int64 v6; // rax
  const char *v7; // rsi
  const char *v8; // rdi
  unsigned int v9; // r12d
  __int64 v10; // rbp
  __int64 v11; // r15
  __int64 v12; // r14
  int v13; // ebp
  __int64 v14; // rax
  size_t v15; // rbp
  __int64 v16; // rbx
  char *v17; // rdi
  __int64 v19; // [rsp+8h] [rbp-4F0h]
  const char *v20; // [rsp+10h] [rbp-4E8h]
  __int64 v21; // [rsp+18h] [rbp-4E0h]
  void *ptr[2]; // [rsp+20h] [rbp-4D8h] BYREF
  __int64 v23; // [rsp+30h] [rbp-4C8h]
  __int64 (__fastcall **v24)(); // [rsp+40h] [rbp-4B8h] BYREF
  _BYTE src[1128]; // [rsp+48h] [rbp-4B0h] BYREF
  __int64 v26; // [rsp+4B0h] [rbp-48h]
  int v27; // [rsp+4B8h] [rbp-40h]
  unsigned __int64 v28; // [rsp+4C0h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  v5 = *(const char **)a2;
  v6 = *(unsigned __int16 *)(a2 + 36);
  *(_OWORD *)ptr = 0;
  v23 = 0;
  v7 = s1;
  v8 = s1;
  if ( !v6 )
  {
LABEL_13:
    if ( *(_QWORD *)(a3 + 8) )
      v7 = *(const char **)a3;
    v13 = *(_DWORD *)(a2 + 24);
    sub_41F60((__int64)&v24, (__int64)v7, 0, v5, (const char *)(a2 + 1062), 0, v8);
    v24 = off_14E748;
    v26 = a2 + 28;
    v27 = v13;
    if ( (unsigned int)sub_421F0((__int64)&v24) )
    {
      v9 = 0;
      if ( a1 )
      {
        v14 = __strlen_chk(src, 1144);
        v15 = v14;
        if ( v14 )
        {
          v16 = v14 + 1;
          if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v14 + 1) )
          {
            v17 = *(char **)a1;
          }
          else
          {
            v17 = (char *)qvector_reserve(a1, *(char **)a1, v14 + 1, 1u);
            *(_QWORD *)a1 = v17;
          }
          *(_QWORD *)(a1 + 8) = v16;
          memmove(v17, src, v15);
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
      v9 = -1;
    }
    sub_426E0((__int64)&v24);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v23 = 0;
    }
    return v9;
  }
  v9 = -1;
  if ( (unsigned int)v6 >= 0xC )
  {
    v10 = _byteswap_ulong(*(_DWORD *)(a2 + 38));
    v11 = _byteswap_ulong(*(_DWORD *)(a2 + 42));
    if ( !*(_BYTE *)(a2 + 28) )
    {
      v10 = *(unsigned int *)(a2 + 38);
      v11 = *(unsigned int *)(a2 + 42);
    }
    if ( v11 + v10 + 12 <= v6 )
    {
      v8 = s1;
      if ( (_DWORD)v11 )
      {
        v19 = a3;
        v20 = v5;
        v21 = a1;
        v12 = 0;
        do
          sub_4E030((__int64)ptr, "%02x", *(unsigned __int8 *)(a2 + v10 + 50 + v12++));
        while ( (unsigned int)v12 < (unsigned int)v11 );
        if ( ptr[1] )
          v8 = (const char *)ptr[0];
        else
          v8 = s1;
        a1 = v21;
        v5 = v20;
        v7 = s1;
        a3 = v19;
      }
      goto LABEL_13;
    }
  }
  return v9;
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 14E748: using guessed type __int64 (__fastcall *off_14E748[2])();
