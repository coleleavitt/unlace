__int64 __fastcall sub_37BC90(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  _QWORD *v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // r13d
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbp
  _QWORD **v14; // rbx
  void *v15; // rdi
  unsigned __int64 v16; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 *v17; // [rsp+8h] [rbp-80h] BYREF
  _BYTE v18[8]; // [rsp+10h] [rbp-78h] BYREF
  int v19; // [rsp+18h] [rbp-70h] BYREF
  void *v20; // [rsp+20h] [rbp-68h]
  int *v21; // [rsp+28h] [rbp-60h]
  int *v22; // [rsp+30h] [rbp-58h]
  __int128 v23; // [rsp+38h] [rbp-50h] BYREF
  __int64 v24; // [rsp+48h] [rbp-40h]
  unsigned __int64 v25; // [rsp+58h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 1128);
  v25 = __readfsqword(0x28u);
  v6 = *(_QWORD **)(v4 + 8);
  if ( !v6 )
    return 0;
  v7 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v7 )
  {
    v10 = 24;
LABEL_11:
    v11 = *(_DWORD *)(v10 + 64);
    v19 = 0;
    v20 = nullptr;
    v21 = &v19;
    v22 = &v19;
    v23 = 0;
    copy_tinfo_t((char *)&v23 + 8, a3);
    v16 = a2;
    v24 = v11;
    v17 = &v16;
    v12 = sub_378CD0((__m128i *)(v4 + 8), &v16, (__int64 **)&v17);
    v13 = v12 + 24;
    sub_3663C0((_QWORD *)(v12 + 32), (__int64)v18);
    copy_tinfo_t(v13 + 56, (char *)&v23 + 8);
    *(_QWORD *)(v13 + 64) = v24;
    clear_tinfo_t((char *)&v23 + 8);
    v14 = (_QWORD **)v20;
    if ( v20 )
    {
      do
      {
        sub_365B50(v14[3]);
        v15 = v14;
        v14 = (_QWORD **)v14[2];
        operator delete(v15, 0x28u);
      }
      while ( v14 );
    }
    return 1;
  }
  if ( (*(_BYTE *)(*v6 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    return 0;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v7 + 24);
    v10 = v7 + 24;
    if ( a2 < v9 )
    {
      v7 = *(_QWORD *)(v7 + 8);
      goto LABEL_7;
    }
    if ( v9 >= a2 )
      break;
    v7 = *(_QWORD *)(v7 + 16);
LABEL_7:
    if ( (*(_BYTE *)v7 & 2) != 0 )
      return 0;
  }
  if ( v6 != (_QWORD *)v7 )
    goto LABEL_11;
  return 0;
}
