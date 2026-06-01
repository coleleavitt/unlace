unsigned __int64 __fastcall sub_28AC10(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 segm_base; // rax
  __int64 v8; // rsi
  __int64 v9; // r13
  bool v10; // zf
  __int64 v11; // rdx
  const char *v12; // rsi
  __int64 v13; // rdx
  const char *v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // r12
  __int16 aflags; // ax
  const char *v18; // rsi
  __int128 v20; // [rsp+0h] [rbp-58h] BYREF
  const char *v21; // [rsp+10h] [rbp-48h] BYREF
  __int128 v22; // [rsp+18h] [rbp-40h]
  unsigned __int64 v23; // [rsp+28h] [rbp-30h]

  v3 = *a2;
  v23 = __readfsqword(0x28u);
  v5 = getseg(v3);
  v6 = *a2;
  segm_base = get_segm_base(v5);
  v8 = *a2;
  v9 = v6 - segm_base;
  v10 = *((_BYTE *)QT::QCoreApplication::self + 745) == 0;
  v22 = 0;
  v21 = nullptr;
  if ( v10 )
    get_ea_name(&v21, v8, 1, 0);
  else
    get_ea_name(&v21, v8, 21, 0);
  v11 = v22;
  v12 = &s1;
  if ( (_QWORD)v22 )
  {
    v12 = v21;
    v11 = v22 - 1;
  }
  sub_4DC370(a1, v12, v11);
  *(_QWORD *)&v22 = 0;
  get_segm_name(&v21, v5, 0);
  v13 = v22;
  v14 = &s1;
  if ( (_QWORD)v22 )
  {
    v14 = v21;
    v13 = v22 - 1;
  }
  sub_4DC370(a1, v14, v13);
  sub_4DC3F0(a1, v9);
  v15 = calc_func_size(a2);
  sub_4DC490(a1, v15);
  if ( a2[3] == -1 )
  {
    sub_4DC3D0(a1);
    goto LABEL_9;
  }
  sub_4DC490(a1, *((_DWORD *)a2 + 8) + (unsigned int)*((unsigned __int16 *)a2 + 20));
  v20 = 0;
  get_frame_part(&v20, a2, 0);
  if ( (unsigned __int64)v20 >= *((_QWORD *)&v20 + 1) )
  {
LABEL_9:
    sub_4DC3D0(a1);
    goto LABEL_10;
  }
  sub_4DC490(a1, (unsigned int)(DWORD2(v20) - v20));
LABEL_10:
  v16 = a2[2];
  sub_4DC380(a1, (v16 & 1) != 0 ? 46 : 82);
  sub_4DC380(a1, (v16 & 2) == 0 ? 46 : 70);
  sub_4DC380(a1, (v16 & 4) == 0 ? 46 : 76);
  sub_4DC380(a1, (v16 & 0x10000) == 0 ? 46 : 77);
  sub_4DC380(a1, (v16 & 0x20000) == 0 ? 46 : 79);
  sub_4DC380(a1, (v16 & 8) == 0 ? 46 : 83);
  sub_4DC380(a1, (v16 & 0x10) == 0 ? 46 : 66);
  aflags = get_aflags(*a2);
  sub_4DC380(a1, (aflags & 0x800) == 0 ? 46 : 84);
  sub_4DC380(a1, (v16 & 0x100) == 0 ? 46 : 61);
  v18 = (_BYTE *)(&qword_70 + 5);
  if ( (v16 & 0x80000) == 0 )
    v18 = (const char *)((v16 & 0x100000) == 0 ? 46 : 99);
  sub_4DC380(a1, v18);
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21, v18);
  }
  return v23 - __readfsqword(0x28u);
}
