__int64 __fastcall sub_11A880(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned int v6; // ebx
  const char *v8; // r14
  const char *errdesc; // rax
  int v10; // [rsp+0h] [rbp-50h] BYREF
  unsigned int v11; // [rsp+4h] [rbp-4Ch] BYREF
  int v12; // [rsp+8h] [rbp-48h] BYREF
  int v13; // [rsp+Ch] [rbp-44h] BYREF
  const char *v14; // [rsp+10h] [rbp-40h] BYREF
  __int128 v15; // [rsp+18h] [rbp-38h]
  unsigned __int64 v16; // [rsp+28h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  v14 = nullptr;
  v15 = 0;
  if ( !(unsigned __int8)sub_179EB0((unsigned int)&v14, 0, 0, 990, a5, a6, v10) )
    goto LABEL_2;
  v8 = s1;
  if ( (_QWORD)v15 )
    v8 = v14;
  v10 = 0;
  v12 = 0;
  v11 = (((unsigned int)getinf() + 4095) >> 4) & 0xFFFFF00;
  v13 = 0;
  if ( !(unsigned int)sub_18BA90(
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
    sub_8F660((__int64)"%s: failed to load binary file\n", v8);
    v6 = 0;
    close_linput();
  }
  else
  {
    errdesc = (const char *)get_errdesc();
    sub_92120((__int64)"%s", errdesc);
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

