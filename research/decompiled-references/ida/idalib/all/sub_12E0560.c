void __fastcall sub_12E0560(_QWORD *a1, __int64 *a2)
{
  bool v2; // zf
  _QWORD *v3; // rax
  __int64 v4; // rdx

  v2 = *a2 == 0;
  *a1 = 0;
  if ( !v2 )
  {
    v3 = (_QWORD *)operator new(0x18u);
    v4 = *a2;
    *a2 = 0;
    *a1 = v3;
    v3[1] = 0x100000001LL;
    *v3 = off_2C42C98;
    v3[2] = v4;
  }
}
