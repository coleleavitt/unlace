__int64 __fastcall sub_1E51E0(__int64 a1, int *a2)
{
  __int128 *v2; // rax
  __int128 *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int16 v10; // dx
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  __int64 v13; // rcx
  __int128 v15; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+10h] [rbp-48h]
  __int64 v17; // [rsp+18h] [rbp-40h]
  int v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+28h] [rbp-30h]
  unsigned __int64 v20; // [rsp+38h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  v2 = sub_1E4F70(a1, a2, nullptr);
  if ( !*(_QWORD *)v2 )
    return 0;
  v3 = v2;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = 0;
  if ( !*(_BYTE *)(v4 + 64) )
    v5 = *(_QWORD *)(v4 + 56);
  v6 = sub_1EA6A0(v5 + 384);
  v9 = *(_QWORD *)v3;
  v10 = *(_WORD *)(v6 + 28);
  v11 = *(_OWORD *)v6;
  v12 = *(_QWORD *)(v6 + 16);
  v13 = *(unsigned int *)(v6 + 24);
  LODWORD(v6) = *(_DWORD *)(v6 + 32);
  WORD2(v17) = v10;
  LODWORD(v17) = v13;
  HIWORD(v17) = 5;
  v18 = v6;
  v19 = v9;
  v15 = v11;
  v16 = v12;
  if ( v9 )
    v19 = (*(__int64 (__fastcall **)(__int64, int *, __int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64, __int64, int))(*(_QWORD *)v9 + 16LL))(
            v9,
            a2,
            5,
            v13,
            v7,
            v8,
            v15,
            *((_QWORD *)&v15 + 1),
            v16,
            v17,
            v18);
  sub_1FFC10(v5, &v15, 1, 0);
  if ( v19 )
    qfree(v19, (const char *)&v15);
  return 1;
}
