void __fastcall __noreturn sub_3A4B50(_QWORD *a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v6; // rdi
  int v8; // eax
  _UNKNOWN **v9; // [rsp+10h] [rbp-78h] BYREF
  int v10; // [rsp+20h] [rbp-68h] BYREF
  void *v11; // [rsp+28h] [rbp-60h]
  int *v12; // [rsp+30h] [rbp-58h]
  int *v13; // [rsp+38h] [rbp-50h]
  __int64 v14; // [rsp+40h] [rbp-48h]
  unsigned __int64 v15; // [rsp+48h] [rbp-40h]

  v6 = *a1;
  v15 = __readfsqword(0x28u);
  sub_614FB0(v6, 10);
  if ( a4 )
  {
    v8 = sub_614FB0(*a1, 10);
    sub_615AB0(*a1, 10, v8 | 0x80000000);
  }
  v10 = 0;
  v9 = &off_2AFCBD8;
  v11 = nullptr;
  v12 = &v10;
  v13 = &v10;
  v14 = 0;
  sub_4EE9E0(a1 + 194, a2, a3, &v9);
  auto_mark_range(a2, a3, 40);
  if ( a4 && (get_merge_state(a2, a3) & 2) == 0 && a2 != -1 )
    sub_3A1890(a1, a2, a3, 0xC8u);
  sub_395C70((int)"Analyzing range %08a-%08a", a2, a3);
}

