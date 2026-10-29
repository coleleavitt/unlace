const char *__fastcall sub_B17AB0(int a1)
{
  const char *result; // rax

  switch ( a1 )
  {
    case 0:
      result = "supervisor";
      break;
    case 1:
      result = "machine";
      break;
    case 2:
      result = "qci-nest";
      break;
    case 3:
      result = "qci-nonest";
      break;
    case 4:
      result = "SiFive-CLIC-preemptible";
      break;
    case 5:
      result = "SiFive-CLIC-stack-swap";
      break;
  }
  return result;
}
