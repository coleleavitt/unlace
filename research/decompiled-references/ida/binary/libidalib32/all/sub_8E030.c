int sub_8E030()
{
  TPalette::TPalette((TPalette *)&unk_255F18, "", 0);
  return __cxa_atexit((void (*)(void *))TPalette::~TPalette, &unk_255F18, &off_22E220);
}

