void __fastcall sub_1A091C0(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // r13
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __m128i *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9

  v8 = (__int64 *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *v8;
  v10 = *v8;
  if ( (unsigned int)*(unsigned __int8 *)(*v8 + 16) - 57 > 1 )
  {
    v22 = sub_19F5590(v10, a2, (__int64)a3, a4);
    if ( sub_F65540(*v8, a2, v23, v24, v25, v26) && (!v22 || *(_DWORD *)(v22 + 20) <= 3u) )
      goto LABEL_4;
LABEL_8:
    if ( !(unsigned __int8)sub_1A09060(a1, (__int64)a3) )
      return;
    goto LABEL_4;
  }
  if ( !sub_F65540(v10, a2, (__int64)a3, a4, a5, a6) || *(_DWORD *)(v9 + 20) > 3u )
    goto LABEL_8;
LABEL_4:
  v11 = sub_168B6C0((__int64)a1);
  v12 = (_QWORD *)sub_168B6C0((__int64)a1);
  v15 = v12[294];
  v12[304] += 40LL;
  v16 = ((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 40;
  if ( v12[295] >= v16 && v15 )
  {
    v12[294] = v16;
    v17 = (__m128i *)((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    v17 = (__m128i *)sub_986170((__int64)(v12 + 294), 40, 40, 3, v13, v14);
  }
  sub_B13720(v17, v11, a3);
  sub_B8CC60(a2, (__int64)v17, v18, v19, v20, v21);
}
