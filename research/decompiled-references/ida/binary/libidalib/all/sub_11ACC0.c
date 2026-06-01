__int64 __fastcall sub_11ACC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned int v6; // ebx
  const char *v8; // r14
  const char *errdesc; // rax
  __int64 v10; // [rsp+0h] [rbp-60h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-58h] BYREF
  __int64 v12; // [rsp+10h] [rbp-50h] BYREF
  __int64 v13; // [rsp+18h] [rbp-48h] BYREF
  const char *v14; // [rsp+20h] [rbp-40h] BYREF
  __int128 v15; // [rsp+28h] [rbp-38h]
  unsigned __int64 v16; // [rsp+38h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  v14 = nullptr;
  v15 = 0;
  if ( !(unsigned __int8)sub_17A9B0((unsigned int)&v14, 0, 0, 990, a5, a6, v10) )
    goto LABEL_2;
  v8 = s1;
  if ( (_QWORD)v15 )
    v8 = v14;
  v10 = 0;
  v12 = 0;
  v13 = 0;
  v11 = ((unsigned __int64)(getinf() + 4095) >> 4) & 0xFFFFFFFFFFFFF00LL;
  if ( !(unsigned int)sub_18C660(
                        1001,
                        (_DWORD)v8,
                        (unsigned int)&v11,
                        (unsigned int)&v10,
                        (unsigned int)&v12,
                        (unsigned int)&v13)
    || v11 == -1 )
  {
    goto LABEL_2;
  }
  if ( open_linput() )
  {
    if ( (unsigned __int8)load_binary_file() )
    {
      close_linput();
LABEL_2:
      v6 = 1;
      goto LABEL_3;
    }
    sub_8F740((__int64)"%s: failed to load binary file\n", v8);
    v6 = 0;
    close_linput();
  }
  else
  {
    errdesc = (const char *)get_errdesc();
    sub_92200((__int64)"%s", errdesc);
    v6 = 0;
  }
LABEL_3:
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  return v6;
}

