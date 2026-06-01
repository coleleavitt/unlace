/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrerror
// Address: 0x00000000000C0D90

//----- (00000000000C0D90) ----------------------------------------------------
const char *__fastcall qstrerror(unsigned int a1)
{
  unsigned int qerrno; // w19
  const char *result; // x0
  _QWORD *v3; // x20

  qerrno = a1;
  if ( a1 == -1 && (qerrno = get_qerrno(), qerrno > 3) )
  {
LABEL_5:
    v3 = sub_B2644();
    sub_3C748((__int64)v3, "Unknown error code %d", qerrno);
    return (const char *)*v3;
  }
  else
  {
    result = "No error";
    switch ( qerrno )
    {
      case 0u:
        return result;
      case 1u:
        result = (const char *)qerrstr(0xFFFFFFFFLL);
        break;
      case 2u:
        result = "Disk is full";
        break;
      case 3u:
        result = "Read attempt past file end";
        break;
      default:
        goto LABEL_5;
    }
  }
  return result;
}
