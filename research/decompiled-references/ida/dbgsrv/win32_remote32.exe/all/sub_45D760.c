/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45D760
// Address: 0x0045D760

//----- (0045D760) --------------------------------------------------------
const char *__userpurge sub_45D760@<eax>(int a1@<ebx>, __m128i a2@<xmm0>, int a3)
{
  int v3; // edi
  const char *result; // eax
  LPVOID *v5; // esi

  v3 = a3;
  if ( a3 == -1 )
    v3 = sub_45C9E0();
  switch ( v3 )
  {
    case 0:
      result = "No error";
      break;
    case 1:
      result = (const char *)sub_45CA00(a1, a2, 0xFFFFFFFF);
      break;
    case 2:
      result = "Disk is full";
      break;
    case 3:
      result = "Read attempt past file end";
      break;
    default:
      v5 = (LPVOID *)sub_45C8E0();
      sub_402970(a2, v5, "Unknown error code %d", v3);
      result = (const char *)*v5;
      break;
  }
  return result;
}
