__int64 __fastcall sub_953440(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 (__fastcall *v2)(); // rax
  __int64 result; // rax

  v1 = *(_QWORD **)(*(_QWORD *)a1 + 1192LL);
  v2 = *(__int64 (__fastcall **)())(*v1 + 96LL);
  if ( v2 != sub_956040 )
    return ((__int64 (__fastcall *)(_QWORD))v2)(*(_QWORD *)(*(_QWORD *)a1 + 1192LL));
  result = v1[2];
  if ( *(_BYTE *)(result + 215) )
  {
    sub_AC7D90(v1[6]);
    return sub_AE08E0(v1[7]);
  }
  return result;
}

