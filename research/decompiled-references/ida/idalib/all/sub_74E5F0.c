__int64 __fastcall sub_74E5F0(_QWORD *a1)
{
  __int64 v1; // rdx
  int v2; // esi
  __int64 v3; // rax
  __int64 result; // rax

  if ( !a1 || !a1[8] || !a1[9] || sub_74E4F0((__int64)a1) )
    return 4294967294LL;
  v3 = a1[7];
  *(_DWORD *)(v3 + 60) = 0;
  *(_QWORD *)(v3 + 64) = 0;
  result = 4294967294LL;
  if ( a1[8] && a1[9] )
  {
    result = sub_74E4F0((__int64)a1);
    if ( (_DWORD)result )
    {
      return 4294967294LL;
    }
    else
    {
      v1 = a1[7];
      *(_QWORD *)(v1 + 40) = 0;
      a1[5] = 0;
      a1[2] = 0;
      a1[6] = 0;
      v2 = *(_DWORD *)(v1 + 16);
      if ( v2 )
        a1[12] = v2 & 1;
      *(_QWORD *)(v1 + 8) = 16180;
      *(_QWORD *)(v1 + 24) = 0x8000FFFFFFFFLL;
      *(_DWORD *)(v1 + 20) = 0;
      *(_QWORD *)(v1 + 48) = 0;
      *(_QWORD *)(v1 + 80) = 0;
      *(_DWORD *)(v1 + 88) = 0;
      *(_QWORD *)(v1 + 144) = v1 + 1368;
      *(_QWORD *)(v1 + 112) = v1 + 1368;
      *(_QWORD *)(v1 + 104) = v1 + 1368;
      *(_QWORD *)(v1 + 7144) = 0xFFFFFFFF00000001LL;
    }
  }
  return result;
}
