/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrerror
// Address: 0x00080574

//----- (00080574) --------------------------------------------------------
const char *__fastcall qstrerror(unsigned int a1)
{
  unsigned int qerrno; // r4
  const char *result; // r0
  _DWORD *v3; // r5

  qerrno = a1;
  if ( a1 == -1 && (qerrno = get_qerrno(), qerrno > 3) )
  {
LABEL_5:
    v3 = sub_75A40();
    sub_1DA58((int)v3, "Unknown error code %d", qerrno);
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
