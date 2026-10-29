__int64 __fastcall sub_76AAE0(unsigned int *a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  char *v5; // rax
  char *v6; // rcx
  unsigned __int64 v8; // rdx
  const char *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // [rsp+Ch] [rbp-2Ch] BYREF
  unsigned int v18; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v19; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  v17 = 0;
  v5 = qword_2CD44C0;
  v18 = 0;
  v6 = ++qword_2CD44C0;
  switch ( *v5 )
  {
    case 'P':
      if ( !(_BYTE)a1 )
        goto LABEL_16;
      v17 = sub_76A7D0(a1, a2, (__int64)&qword_2CD44C0, (__int64)v6, a5);
LABEL_4:
      sub_76FCD0(&v19, 1718379859, 4);
      v18 = v19;
      break;
    case 'Q':
      if ( (_BYTE)a1 )
        goto LABEL_16;
      v17 = sub_76AAE0(1);
LABEL_9:
      v18 = sub_767A40((char *)off_C0, a2, v8, v9, v10);
      break;
    case 'S':
      v17 = sub_767690((__int64)a1, (__int64)a2, (__int64)&qword_2CD44C0, v6, a5);
      v8 = HIWORD(v17);
      if ( BYTE2(v17) == 0x80 )
        goto LABEL_4;
      goto LABEL_9;
    case 'q':
      sub_76FA20(&v19, "(archetype", 10);
      v17 = v19;
      v18 = sub_767900(0, (__int64)"(archetype", v11, v12, v13);
      sub_76FCD0(&v19, 543584032, 4);
      sub_770B70(&v18, &v19);
      v19 = sub_769BC0(0, &v19, v14, v15, v16);
      sub_770B70(&v18, &v19);
      if ( (dword_2CD44CC & 0x20000) == 0 )
        sub_770B70(&v17, &v18);
      sub_76FD20(&v17, 41);
      return v17;
    case 's':
      a2 = (unsigned int *)"Swift";
      sub_76FA20(&v19, "Swift", 5);
      BYTE2(v17) = 64;
      LOWORD(v17) = v19;
      HIBYTE(v17) = HIBYTE(v19);
      goto LABEL_9;
    default:
LABEL_16:
      sub_76E6C0(a1, a2, &qword_2CD44C0, v6);
  }
  sub_76FD20(&v17, 46);
  sub_770B70(&v17, &v18);
  BYTE2(v17) = 0;
  sub_772B70(qword_2CD44D0, &v17);
  return v17;
}
