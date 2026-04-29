unsigned __int64 __fastcall sub_19B0(__int64 a1, int a2, int a3)
{
  int v4; // ebp
  unsigned int v5; // r12d
  __int64 v6; // rax
  unsigned int v7; // r12d
  __int64 v8; // rbp
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r14
  int v12; // r15d
  _BYTE v14[8]; // [rsp+4h] [rbp-4A4h] BYREF
  int v15; // [rsp+Ch] [rbp-49Ch]
  int v16; // [rsp+10h] [rbp-498h] BYREF
  int v17; // [rsp+14h] [rbp-494h]
  unsigned int v18; // [rsp+18h] [rbp-490h]
  _BYTE v19[16]; // [rsp+20h] [rbp-488h] BYREF
  unsigned int v20; // [rsp+30h] [rbp-478h]
  int v21; // [rsp+3Ch] [rbp-46Ch]
  int v22; // [rsp+48h] [rbp-460h]
  char v23[1032]; // [rsp+60h] [rbp-448h] BYREF
  unsigned __int64 v24; // [rsp+468h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  qlseek(a1, a2, 0);
  lread(a1, v14, 12);
  qlseek(a1, (unsigned int)(v15 - a3), 0);
  lread(a1, v19, 60);
  v4 = v21;
  v5 = v22 - v21;
  v6 = qlsize(a1);
  v7 = v5 >> 4;
  v8 = (unsigned int)(v4 - a3);
  v9 = v7;
  v10 = v6 - v8;
  if ( (v10 & 0x8000000000000000LL) != 0LL )
  {
    if ( (unsigned int)sub_16D0(
                         1u,
                         (__int64)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
                         "Symbol count",
                         v7,
                         0,
                         ". Do you want to continue with the new value?") != 1 )
      goto LABEL_3;
    goto LABEL_13;
  }
  if ( !v7 )
  {
LABEL_13:
    qlseek(a1, v8, 0);
    return v24 - __readfsqword(0x28u);
  }
  if ( v10 >= 16 * (unsigned __int64)v7 )
  {
    qlseek(a1, v8, 0);
LABEL_8:
    v12 = 0;
    do
    {
      lread(a1, &v16, 16);
      qlgetz(a1, (unsigned int)(v22 + v16 - a3), v23, 1024);
      set_name(v18, v23, 1024);
      if ( (v17 & 0x204) == 0x200 )
      {
        put_byte(v18, 195);
        if ( v20 >= v18 )
          sub_1530((__int64)"interr: symbol #%d (%s) is not in the plt", v12, v23);
      }
      ++v12;
    }
    while ( v12 != v7 );
    return v24 - __readfsqword(0x28u);
  }
  v11 = v10 >> 4;
  v7 = v10 >> 4;
  if ( (unsigned int)sub_16D0(
                       1u,
                       (__int64)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
                       "Symbol count",
                       v9,
                       v10 >> 4,
                       ". Do you want to continue with the new value?") != 1 )
LABEL_3:
    sub_1870(0);
  qlseek(a1, v8, 0);
  if ( v11 )
    goto LABEL_8;
  return v24 - __readfsqword(0x28u);
}
