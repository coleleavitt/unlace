__int64 __fastcall sub_FA360(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int16 v4; // dx

  result = operator new(0x18u);
  *(_WORD *)(result + 16) = 0x8000;
  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)result = off_2311F8;
  *(_QWORD *)(result + 8) = 0;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 916);
    v4 = *(_WORD *)(v2 + 924);
    *(_QWORD *)(result + 8) = v3;
    *(_WORD *)(result + 16) = v4;
  }
  return result;
}

