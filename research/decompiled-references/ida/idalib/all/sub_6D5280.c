__int64 __fastcall sub_6D5280(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, char a5, char a6)
{
  __int64 idati; // rax
  unsigned __int8 v8; // [rsp+8h] [rbp-30h]
  char v9; // [rsp+Ch] [rbp-2Ch]
  _QWORD v10[2]; // [rsp+10h] [rbp-28h] BYREF
  char v11; // [rsp+20h] [rbp-18h]
  char v12; // [rsp+21h] [rbp-17h]
  unsigned __int64 v13; // [rsp+28h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  v11 = 0;
  v12 = a5;
  v10[1] = a3;
  if ( !a2 )
  {
    v9 = a6;
    v8 = a4;
    idati = get_idati(a1, 0);
    a6 = v9;
    a4 = v8;
    a2 = idati;
  }
  v10[0] = a2;
  return create_tinfo(a1, a4, a6 == 0 ? 189 : 61, v10);
}
