unsigned __int64 __fastcall sub_552910(__int64 *a1, int a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // [rsp+18h] [rbp-60h] BYREF
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  int v9; // [rsp+28h] [rbp-50h]
  int v10; // [rsp+2Ch] [rbp-4Ch]
  unsigned __int64 v11; // [rsp+38h] [rbp-40h]

  v4 = *(_QWORD *)(a3 + 8);
  v11 = __readfsqword(0x28u);
  if ( v4 == 32 )
  {
    v5 = 4;
    goto LABEL_5;
  }
  if ( v4 > 0x20 )
  {
    v5 = 5;
    if ( v4 == 64 )
      goto LABEL_5;
LABEL_8:
    v9 = 0;
    v10 = v4 >> 3;
    v7 = 17;
    v8 = 0;
    copy_tinfo_t(&v8);
    create_tinfo(a3 + 64, 11, 11, &v8);
    clear_tinfo_t(&v8);
    clear_tinfo_t(&v7);
    goto LABEL_6;
  }
  if ( v4 == 8 )
  {
    v5 = 2;
    goto LABEL_5;
  }
  v5 = 3;
  if ( v4 != 16 )
    goto LABEL_8;
LABEL_5:
  v8 = v5;
  copy_tinfo_t(a3 + 64);
  clear_tinfo_t(&v8);
LABEL_6:
  sub_3573A0((char **)(a3 + 16));
  return sub_54A6A0(a1, (const char *)(*a1 + ((__int64)a2 << 7)), a3);
}

