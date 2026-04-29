__int64 __fastcall sub_1C3390(_DWORD *a1, unsigned int a2, signed int a3, _QWORD *a4)
{
  unsigned int v4; // r12d
  signed int tinfo_size; // ebp
  unsigned int v7; // ebx
  signed int v9; // edx
  signed int v10; // eax
  __int64 (__fastcall *v11)(__int64, unsigned int); // rax
  __int64 v12; // [rsp+0h] [rbp-68h] BYREF
  __int64 v13; // [rsp+8h] [rbp-60h]
  _DWORD v14[2]; // [rsp+10h] [rbp-58h] BYREF
  __int16 v15; // [rsp+1Ah] [rbp-4Eh]
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v4 = a2;
  tinfo_size = a3;
  v16 = __readfsqword(0x28u);
  v12 = 3;
  v13 = a2;
  v7 = sub_1C3110((__int64)&v12, (__int64)a4, a3);
  if ( (_BYTE)v7 )
  {
    if ( (_DWORD)v12 == 3 )
    {
      LOBYTE(v7) = (_DWORD)v13 == a2;
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  if ( a4 && (unsigned __int8)*a4 )
    tinfo_size = get_tinfo_size(0, *a4, 0);
  v9 = sub_12F430(a1, nullptr, a2, 0x7FFFFFFFu);
  v10 = a1[20];
  if ( tinfo_size <= v10 )
    v10 = tinfo_size;
  if ( v10 > v9 )
    goto LABEL_3;
  v11 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 320LL);
  if ( v11 != sub_1BD680 )
    v4 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, _QWORD))v11)(a1, a2, (unsigned int)tinfo_size);
  if ( v4 == -1 )
  {
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  sub_1C2900(v14, a1, (__int64)&v12, tinfo_size, 0);
  if ( v14[0] )
  {
    v7 = 1;
    if ( v14[0] == 3 )
      LOBYTE(v7) = v15 == 0;
  }
  cleanup_argloc(v14);
LABEL_4:
  cleanup_argloc(&v12);
  return v7;
}
