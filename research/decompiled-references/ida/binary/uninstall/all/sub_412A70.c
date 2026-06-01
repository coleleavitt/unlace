char *__fastcall sub_412A70(__int16 a1)
{
  int v1; // edi
  char *v2; // rdx

  v1 = a1 & 0xF000;
  v2 = "file";
  if ( v1 != 0x8000 )
  {
    v2 = "directory";
    if ( v1 != 0x4000 )
    {
      v2 = "characterSpecial";
      if ( v1 != 0x2000 )
      {
        v2 = "blockSpecial";
        if ( v1 != 24576 )
        {
          v2 = "fifo";
          if ( v1 != 4096 )
          {
            v2 = "link";
            if ( v1 != 40960 )
            {
              v2 = "socket";
              if ( v1 != 49152 )
                return "unknown";
            }
          }
        }
      }
    }
  }
  return v2;
}

