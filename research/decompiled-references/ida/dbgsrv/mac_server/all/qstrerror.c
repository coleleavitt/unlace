/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrerror
// Address: 0x000000010007DCF0

//----- (000000010007DCF0) ----------------------------------------------------
const char *__fastcall qstrerror(unsigned int qerrno)
{
  const char *result; // rax
  __int64 v2; // r14

  if ( qerrno == -1 && (qerrno = get_qerrno(), qerrno > 3) )
  {
LABEL_5:
    v2 = sub_100074580();
    sub_100002D00(v2, "Unknown error code %d", qerrno);
    return *(const char **)v2;
  }
  else
  {
    switch ( qerrno )
    {
      case 0u:
        result = "No error";
        break;
      case 1u:
        result = (const char *)qerrstr(-1);
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
