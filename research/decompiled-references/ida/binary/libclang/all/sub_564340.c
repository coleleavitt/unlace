int sub_564340()
{
  const char *v1; // [rsp+0h] [rbp-2A8h] BYREF
  __int16 v2; // [rsp+20h] [rbp-288h]
  _BYTE v3[64]; // [rsp+30h] [rbp-278h] BYREF
  _QWORD v4[71]; // [rsp+70h] [rbp-238h] BYREF

  memset(v4, 0, 0x218u);
  v4[0] = &v4[2];
  v4[4] = &v4[6];
  v4[8] = &v4[10];
  v4[12] = &v4[14];
  v4[16] = &v4[18];
  v4[20] = &v4[22];
  v4[25] = &v4[27];
  v4[46] = &v4[48];
  v4[53] = &v4[55];
  v4[59] = &v4[61];
  v4[63] = &v4[65];
  v1 = "amdgcn-amd-amdhsa";
  v2 = 259;
  LODWORD(v4[24]) = 1;
  HIDWORD(v4[37]) = 16;
  HIDWORD(v4[40]) = 16;
  sub_266ED00(v3, &v1);
  sub_CFED10(qword_4ADC9A0, v3, v4);
  std::string::_M_dispose();
  sub_D429B0(v4);
  return __cxa_atexit(func, qword_4ADC9A0, &off_47CFE00);
}

