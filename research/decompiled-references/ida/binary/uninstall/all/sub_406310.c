void *__fastcall sub_406310(const char *src)
{
  int v1; // ebx

  if ( src )
  {
    v1 = strlen(src);
    if ( ::src )
      Tcl_Free(::src);
    ::src = (void *)sub_40FB00((unsigned int)(v1 + 1));
    memcpy(::src, src, v1);
    *((_BYTE *)::src + v1) = 0;
  }
  return ::src;
}

