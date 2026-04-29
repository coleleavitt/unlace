__int64 __fastcall sub_296CA0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  _QWORD *v4; // r15
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  __m128i v15; // xmm0
  unsigned int v16; // ebp
  __int64 (__fastcall **v18)(); // [rsp+0h] [rbp-A8h] BYREF
  int v19; // [rsp+8h] [rbp-A0h]
  __int64 v20; // [rsp+10h] [rbp-98h]
  __int128 v21; // [rsp+18h] [rbp-90h]
  __int64 v22; // [rsp+28h] [rbp-80h]
  __int128 v23; // [rsp+30h] [rbp-78h]
  __m128i v24; // [rsp+40h] [rbp-68h]
  __int64 v25; // [rsp+50h] [rbp-58h]
  unsigned int v26; // [rsp+58h] [rbp-50h]
  unsigned __int64 v27; // [rsp+68h] [rbp-40h]

  v4 = (_QWORD *)(a3 + 48);
  v8 = a4 + 48;
  v9 = *(_QWORD *)(a2 + 216);
  v27 = __readfsqword(0x28u);
  v10 = a4;
  if ( (unsigned __int8)sub_32A510(v9, a4 + 48, a3 + 48) )
  {
    v14 = 0;
  }
  else
  {
    v13 = j__qalloc_or_throw(64, v8, v11, v12);
    *(_QWORD *)v13 = -1;
    v14 = v13;
    *(_DWORD *)(v13 + 8) = 0;
    *(_QWORD *)(v13 + 12) = -1;
    *(_QWORD *)(v13 + 48) = 0;
    *(_DWORD *)(v13 + 56) = 0;
    sub_25AFF0(v13, v10);
    v10 = v14;
    sub_246B40(v14, *(_QWORD *)(a2 + 216), v4);
  }
  v21 = 0;
  v23 = 0;
  v15 = _mm_loadl_epi64((const __m128i *)(a2 + 216));
  v19 = 6;
  v18 = (__int64 (__fastcall **)())&off_4E0D50;
  v20 = 0;
  v22 = 0;
  v25 = v10;
  v26 = 0;
  v24 = _mm_unpacklo_epi64(v15, (__m128i)a3);
  v16 = sub_255A80((__int64 *)&v18, a1, 0);
  if ( v14 )
  {
    sub_255630(v14);
    clear_tinfo_t();
    j__qfree(v14);
  }
  if ( !v16 )
    v16 = v26;
  v18 = off_4DBCF8;
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  return v16;
}
