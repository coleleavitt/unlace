/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140033800
// Address: 0x0000000140033800

//----- (0000000140033800) ----------------------------------------------------
__int64 __fastcall sub_140033800(_QWORD *a1, char *a2, char a3, int a4)
{
  __int64 v8; // rax
  __int64 result; // rax
  unsigned __int16 v10; // r8
  __int64 (__fastcall ***v11)(_QWORD, char *); // rcx
  unsigned __int64 v12; // rax
  int v13[6]; // [rsp+20h] [rbp-18h] BYREF

  v8 = sub_1400333C0(a1, a2, v13);
  switch ( v13[0] )
  {
    case 0:
    case 5:
      v11 = (__int64 (__fastcall ***)(_QWORD, char *))a1[51];
      if ( v11 )
      {
        v12 = (**v11)(v11, a2);
        if ( v12 != -1 )
        {
          sub_140034550((__int64)a1, v12);
          return 0;
        }
      }
      sub_140063F70(0, a2);
      return 53;
    case 1:
      sub_140034910((__int64)a1, 32 * ((a3 ^ 1) + 2), v8);
      goto LABEL_21;
    case 2:
      if ( a3 && a1[22] && !v8 )
        return 1539;
      sub_140034910((__int64)a1, 32 * (a3 ^ 1) + 80, v8);
      goto LABEL_21;
    case 3:
      sub_140034380((__int64)a1, 4 * a3 - 43, v8);
      goto LABEL_21;
    case 4:
      if ( a3 )
      {
        if ( dword_1400C60AC <= 0 )
        {
          result = 1611;
          goto LABEL_17;
        }
        sub_140032A20((__int64)a1);
        sub_140034980((__int64)a1, a2, 0);
        v10 = dword_1400C60AC;
      }
      else
      {
        if ( dword_1400C60A8 <= 0 )
        {
          result = 1610;
          goto LABEL_17;
        }
        sub_140030E40((__int64)a1);
        sub_140034980((__int64)a1, a2, 0);
        v10 = dword_1400C60A8;
      }
      sub_140034910((__int64)a1, 0, v10);
      result = 0;
LABEL_17:
      if ( !(_DWORD)result )
      {
LABEL_21:
        if ( a4 )
          return sub_140034830(a1, a4);
        else
          return 0;
      }
      return result;
    case 6:
      if ( a3 )
        return 53;
      sub_140034980((__int64)a1, a2, 0);
      sub_1400347C0((__int64)a1, 174);
      goto LABEL_21;
    default:
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(271);
  }
}
// 1400C60A8: using guessed type int dword_1400C60A8;
// 1400C60AC: using guessed type int dword_1400C60AC;
// 1400CB61C: using guessed type char byte_1400CB61C;
