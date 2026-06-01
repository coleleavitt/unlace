unsigned __int64 __fastcall sub_FA2B0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // xmm0_8
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // kr00_8
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int128 v15; // [rsp+0h] [rbp-48h] BYREF
  __int64 v16; // [rsp+10h] [rbp-38h]
  __int64 v17; // [rsp+18h] [rbp-30h]
  int v18; // [rsp+20h] [rbp-28h]
  _QWORD *v19; // [rsp+28h] [rbp-20h]
  unsigned __int64 v20; // [rsp+38h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 8);
  v20 = __readfsqword(0x28u);
  v3 = sub_15CFF0(v1 + 440);
  v5 = *(_QWORD *)(v3 + 16);
  v6 = *(unsigned int *)(v3 + 24);
  v7 = *(unsigned int *)(v3 + 32);
  v15 = *(_OWORD *)v3;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(int *)(v8 + 20);
  LODWORD(v17) = v6;
  v16 = v5;
  v10 = v9;
  v11 = *(unsigned __int16 *)(v3 + 28);
  v12 = *(_QWORD **)(v3 + 40);
  v18 = v7;
  v19 = v12;
  HIDWORD(v17) = v11 | ((unsigned int)(v10 / 2) << 16);
  if ( v12 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64, __int64, _QWORD, _QWORD, __int64, __int64, int))(*v12 + 16LL))(
            v12,
            v7,
            *v12,
            v11,
            v6,
            v4,
            v15,
            *((_QWORD *)&v15 + 1),
            v16,
            v17,
            v18);
    v8 = *(_QWORD *)(a1 + 8);
    v19 = (_QWORD *)v13;
  }
  sub_16A8C0(v8 + 440, &v15);
  if ( v19 )
    qfree();
  return v20 - __readfsqword(0x28u);
}

