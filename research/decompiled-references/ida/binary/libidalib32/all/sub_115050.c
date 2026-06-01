__int64 __fastcall sub_115050(int a1, __int64 *a2)
{
  __int64 result; // rax
  void (__fastcall **v3)(__int64 *, __int64, unsigned __int16 *); // rax
  char v4; // dl
  void (__fastcall **v5)(__int64 *, __int64, unsigned __int16 *); // rax
  unsigned __int16 v6; // cx
  char v7; // dl
  __int64 v8; // rax
  __int64 v9; // rbp
  char v10; // dl
  __int64 v11; // rax
  __int64 v12; // [rsp-8h] [rbp-50h]
  unsigned __int16 v13; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned __int16 v14; // [rsp+Eh] [rbp-3Ah] BYREF
  unsigned int v15; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+14h] [rbp-34h] BYREF
  unsigned int v17; // [rsp+18h] [rbp-30h] BYREF
  int v18; // [rsp+1Ch] [rbp-2Ch] BYREF
  int v19; // [rsp+20h] [rbp-28h] BYREF
  int v20; // [rsp+24h] [rbp-24h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  if ( a1 == -2 )
  {
    v3 = (void (__fastcall **)(__int64 *, __int64, unsigned __int16 *))*a2;
    v13 = 0;
    v14 = 0;
    v15 = -1;
    v16 = -1;
    v17 = -1;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    (*v3)(a2, 1, &v14);
    (*(void (__fastcall **)(__int64 *, __int64, unsigned __int16 *))*a2)(a2, 4, &v13);
    v4 = (*(__int64 (__fastcall **)(__int64 *, __int64, unsigned int *))*a2)(a2, 7, &v15);
    v5 = (void (__fastcall **)(__int64 *, __int64, unsigned __int16 *))*a2;
    if ( !v4 )
    {
      ((void (__fastcall *)(__int64 *, __int64))v5[6])(a2, 7);
      return 0;
    }
    if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64, int *))*v5)(a2, 9, &v18) )
    {
      (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 48))(a2, 9);
      return 0;
    }
    if ( v14 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, unsigned int *))*a2)(a2, 2, &v17);
      v11 = *a2;
      if ( !v10 )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(v11 + 48))(a2, 2);
        return 0;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, int *))v11)(a2, 3, &v19) )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 48))(a2, 3);
        return 0;
      }
    }
    v6 = v13;
    if ( v13 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, unsigned int *))*a2)(a2, 5, &v16);
      v8 = *a2;
      if ( !v7 )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(v8 + 48))(a2, 5);
        return 0;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, int *))v8)(a2, 6, &v20) )
      {
        (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 48))(a2, 6);
        return 0;
      }
      v6 = v13;
    }
    v9 = (int)sub_114E10(v14, v17, v19, v6, v16, v20, v15, v18);
    result = 1;
    if ( (_DWORD)v9 != 8 )
    {
      if ( (_DWORD)v9 == 5 )
        (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a2 + 48))(a2, 7, v12);
      sub_92120((__int64)"ICON ERROR\nAUTOHIDE NONE\n%s", off_230CE0[v9]);
      return 0;
    }
  }
  else
  {
    if ( a1 == 8
      && (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, int *))*a2)(a2, 8, &v19)
      && (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, int *))*a2)(a2, 9, &v20)
      && dword_251CB0 < (unsigned int)(v19 + v20) )
    {
      v20 = dword_251CB0 - v19;
      (*(void (__fastcall **)(__int64 *, __int64, int *))(*a2 + 8))(a2, 9, &v20);
    }
    return 1;
  }
  return result;
}

