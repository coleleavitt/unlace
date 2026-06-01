/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qstrerror
// Address: 0x000B39F0

//----- (000B39F0) --------------------------------------------------------
const char *__cdecl qstrerror(unsigned int a1)
{
  unsigned int qerrno; // esi
  const char *result; // eax
  _DWORD *v3; // edi

  qerrno = a1;
  if ( a1 == -1 && (qerrno = get_qerrno(), qerrno > 3) )
  {
LABEL_5:
    v3 = sub_A39C0();
    sub_1F400((int)v3, "Unknown error code %d", qerrno);
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
