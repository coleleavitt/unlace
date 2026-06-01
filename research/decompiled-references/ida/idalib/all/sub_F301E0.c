__int64 __fastcall sub_F301E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _BYTE *v3; // rax
  __int64 result; // rax

  sub_F30150(a1, a2);
  v2 = *(_QWORD *)(a1 + 1096);
  v3 = *(_BYTE **)(v2 + 32);
  if ( (unsigned __int64)v3 >= *(_QWORD *)(v2 + 24) )
  {
    v2 = sub_227BA10(v2, 32);
  }
  else
  {
    *(_QWORD *)(v2 + 32) = v3 + 1;
    *v3 = 32;
  }
  switch ( *(_BYTE *)(a2 + 48) )
  {
    case 0:
      result = sub_995540(v2, "read");
      break;
    case 1:
      result = sub_995540(v2, "write");
      break;
    case 2:
      result = sub_995540(v2, "update");
      break;
    case 3:
      result = sub_995540(v2, "capture");
      break;
    case 4:
      result = sub_995540(v2, "<none>");
      break;
  }
  return result;
}
