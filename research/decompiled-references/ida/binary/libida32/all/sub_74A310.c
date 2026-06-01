__int64 __fastcall sub_74A310(unsigned int *a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int16 v9; // ax
  unsigned int v11; // [rsp+0h] [rbp-28h] BYREF
  int v12; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v11 = 0;
  v5 = (unsigned __int8)*qword_2CAA5C0;
  if ( (_BYTE)v5 != 83 )
  {
    if ( (_BYTE)v5 == 115 )
    {
      a2 = (unsigned int *)"Swift";
      ++qword_2CAA5C0;
      a1 = (unsigned int *)&v12;
      sub_74F560(&v12, "Swift", 5);
      v9 = v12;
      BYTE2(v11) = 64;
      HIBYTE(v11) = HIBYTE(v12);
      LOWORD(v11) = v12;
      v6 = dword_2CAA5CC & 0x40000;
      if ( (dword_2CAA5CC & 0x40000) == 0 )
      {
LABEL_6:
        if ( v9 )
        {
          a2 = (_DWORD *)(&qword_28 + 6);
          a1 = &v11;
          sub_74F860(&v11, 46);
        }
        goto LABEL_8;
      }
    }
    else
    {
      a1 = nullptr;
      v11 = sub_749700(0, a2, (__int64)&qword_2CAA5C0, v5, a5);
      if ( (dword_2CAA5CC & 0x40000) == 0 || BYTE2(v11) != 64 )
        goto LABEL_5;
    }
    goto LABEL_11;
  }
  ++qword_2CAA5C0;
  v11 = sub_7471D0((__int64)a1, (__int64)a2, (__int64)&qword_2CAA5C0, (char *)v5, a5);
  v6 = HIWORD(v11);
  if ( BYTE2(v11) == 64 )
  {
    if ( (dword_2CAA5CC & 0x40000) == 0 )
    {
LABEL_5:
      v9 = v11;
      goto LABEL_6;
    }
LABEL_11:
    v11 = 0;
LABEL_8:
    v12 = sub_747920((__int64)a1, a2, v6, v7, v8);
    sub_7506B0(&v11, &v12);
    BYTE2(v11) = 0x80;
    sub_7526B0(qword_2CAA5D0, &v11);
    goto LABEL_9;
  }
  if ( BYTE2(v11) != 0x80 )
    sub_74E200(a1, a2, v6, v7);
LABEL_9:
  BYTE2(v11) = -64;
  return v11;
}

