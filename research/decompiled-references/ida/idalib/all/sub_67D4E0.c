__int64 __fastcall sub_67D4E0(__int64 *a1, __int64 a2, __int16 a3, __int64 a4, const char *a5, char a6)
{
  __int64 v6; // rdx
  __int64 v9; // rdi
  __int64 v11; // r9
  unsigned int v12; // eax
  int v13; // edx
  __int64 result; // rax
  int v15[4]; // [rsp+Ch] [rbp-6Ch] BYREF
  int v16; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int64 (__fastcall **v17)(); // [rsp+20h] [rbp-58h] BYREF
  int v18; // [rsp+28h] [rbp-50h]
  __int64 v19; // [rsp+30h] [rbp-48h]
  __int64 (__fastcall **v20)(); // [rsp+40h] [rbp-38h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-30h]
  __int64 v22; // [rsp+50h] [rbp-28h]
  unsigned __int64 v23; // [rsp+58h] [rbp-20h]

  v6 = (unsigned int)a3;
  v9 = *a1;
  v15[0] = a4;
  v23 = __readfsqword(0x28u);
  v11 = a6 & 1;
  v16 = 0;
  v17 = off_2B25850;
  v19 = a2;
  v18 = v6;
  v20 = off_2B25850;
  if ( (_DWORD)v11 )
  {
    v22 = sub_631AD0(v9, 20, v6, a4, (__int64)a5, v11);
    v12 = dword_2C81AB4;
  }
  else
  {
    v22 = sub_631AD0(v9, 19, v6, a4, (__int64)a5, v11);
    v12 = 0;
  }
  v21 = v12;
  v13 = sub_67C900((__int64)a1, (__int64)&v16, (__int64)&v17, (__int64)&v20, v15, a5, a6);
  result = -1;
  if ( v13 == 1 )
    return v19;
  return result;
}
