/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrerror
// Address: 0x00000000000C5AE0

//----- (00000000000C5AE0) ----------------------------------------------------
const char *__fastcall qstrerror(unsigned int a1)
{
  unsigned int qerrno; // ebx
  const char *result; // rax
  _QWORD *v3; // r14

  qerrno = a1;
  if ( a1 == -1 && (qerrno = get_qerrno(), qerrno > 3) )
  {
LABEL_5:
    v3 = sub_B72B0();
    sub_3BBA0((__int64)v3, "Unknown error code %d", qerrno);
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
