__int64 __fastcall sub_215E2D0(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned __int16 v2; // cx
  __int64 v3; // rax
  __int64 v4; // rax

  v1 = a1[6];
  if ( !v1 )
  {
    v4 = *(int *)(a1[7] + 44LL);
    goto LABEL_4;
  }
  v2 = *(_WORD *)(v1 + 2);
  v3 = 0;
  if ( v2 != 0xFFFF )
  {
    v4 = v2;
LABEL_4:
    v3 = 40 * v4;
  }
  return a1[11] + v3;
}
