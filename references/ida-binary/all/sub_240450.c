__int64 __fastcall sub_240450(__int64 a1, double a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  __int64 v5; // rdx

  result = (unsigned int)dword_8BA590;
  if ( dword_8BA590 == -1 )
  {
    v3 = -1;
LABEL_9:
    qword_8BA5A0 = v3;
    return result;
  }
  v3 = *(_QWORD *)(a1 + 32LL * dword_8BA590 + 8);
  if ( !dbg )
    goto LABEL_9;
  if ( (*(_BYTE *)(dbg + 37) & 0x40) == 0 )
    goto LABEL_9;
  v4 = qword_8CC600;
  if ( !qword_8CC600 )
    goto LABEL_9;
  *(_QWORD *)qword_8CC600 = v3;
  v4[1] = a1;
  *((_DWORD *)v4 + 4) = result;
  result = sub_23D480((__int64)v4, 11, v3, (char *)v4, a2);
  v5 = -1;
  if ( (_DWORD)result == 1 )
  {
    result = (__int64)qword_8CC600;
    v5 = *(_QWORD *)qword_8CC600;
  }
  qword_8BA5A0 = v5;
  return result;
}
