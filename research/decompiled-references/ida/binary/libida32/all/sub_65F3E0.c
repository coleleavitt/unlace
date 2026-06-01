__int64 __fastcall sub_65F3E0(__int64 *a1, unsigned int a2, __int16 a3, __int64 a4, const char *a5, char a6)
{
  __int64 v6; // rdx
  __int64 v9; // rdi
  __int64 v11; // r9
  unsigned int v12; // eax
  int v13; // edx
  __int64 result; // rax
  int v15[4]; // [rsp+Ch] [rbp-5Ch] BYREF
  int v16; // [rsp+1Ch] [rbp-4Ch] BYREF
  __int64 (**v17)(void); // [rsp+20h] [rbp-48h] BYREF
  int v18; // [rsp+28h] [rbp-40h]
  unsigned int v19; // [rsp+2Ch] [rbp-3Ch]
  __int64 (**v20)(void); // [rsp+30h] [rbp-38h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-30h]
  int v22; // [rsp+3Ch] [rbp-2Ch]
  unsigned __int64 v23; // [rsp+48h] [rbp-20h]

  v6 = (unsigned int)a3;
  v9 = *a1;
  v15[0] = a4;
  v23 = __readfsqword(0x28u);
  v11 = a6 & 1;
  v16 = 0;
  v17 = off_2AFC770;
  v19 = a2;
  v18 = v6;
  v20 = off_2AFC770;
  if ( (_DWORD)v11 )
  {
    v22 = sub_614FB0(v9, 20, v6, a4, (__int64)a5, v11);
    v12 = dword_2C57A94;
  }
  else
  {
    v22 = sub_614FB0(v9, 19, v6, a4, (__int64)a5, v11);
    v12 = 0;
  }
  v21 = v12;
  v13 = sub_65E800((__int64)a1, (__int64)&v16, (__int64)&v17, (const char *)&v20, v15, a5, a6);
  result = 0xFFFFFFFFLL;
  if ( v13 == 1 )
    return v19;
  return result;
}

