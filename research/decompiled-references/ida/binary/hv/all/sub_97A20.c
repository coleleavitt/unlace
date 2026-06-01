int sub_97A20()
{
  int result; // eax
  int v1; // ebx

  result = open("/dev/tty", 2);
  if ( result > 0 )
  {
    v1 = result;
    if ( (unsigned int)sub_97970(result) == 2 )
      ioctl(v1, 0x540Eu, 0);
    return close(v1);
  }
  return result;
}

