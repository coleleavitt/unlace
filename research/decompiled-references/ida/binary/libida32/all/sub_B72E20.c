_QWORD *__fastcall sub_B72E20(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx

  v6 = sub_B6C230(144, a1, a2, 0, a5, a6);
  sub_B5C3D0(v6, 0x3Bu, 0, (__int64)a1, 0, 0, 0, 0, 0);
  *((_BYTE *)v6 + 74) &= ~0x10u;
  v6[16] = 0;
  v6[17] = 0;
  *v6 = &off_2BD8C58;
  return v6;
}

