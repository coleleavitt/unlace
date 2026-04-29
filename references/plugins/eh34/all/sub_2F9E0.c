__int64 __fastcall sub_2F9E0(__int64 a1, __int64 a2)
{
  char v2; // bp
  char v3; // bl
  __int64 result; // rax
  const char *v5; // rsi
  const char *v6; // r8
  const char *v7; // rdx
  const char *v8; // rcx
  __int16 v9; // [rsp+Eh] [rbp-42h] BYREF
  __int16 v10; // [rsp+10h] [rbp-40h] BYREF
  __int16 v11; // [rsp+12h] [rbp-3Eh] BYREF
  __int16 v12; // [rsp+14h] [rbp-3Ch] BYREF
  _BYTE v13[2]; // [rsp+16h] [rbp-3Ah] BYREF
  _QWORD v14[2]; // [rsp+18h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h]
  unsigned __int64 v16; // [rsp+30h] [rbp-20h]

  v2 = *(_BYTE *)(a1 + 10);
  v16 = __readfsqword(0x28u);
  v14[0] = a1;
  v14[1] = a2;
  v15 = 0;
  v9 = v2 & 3;
  v10 = (v2 & 4) != 0;
  v11 = (v2 & 0x40) != 0;
  v12 = (unsigned __int16)~v2 >> 15;
  if ( (int)sub_2F7B0(
              (__int64)"C++ exceptions global settings\n"
                       "\n"
                       "%/%*<#Don't show any C++ exception constructs#Default output mode##~D~isabled:R>\n"
                       "<#Don't show C++ exception constructs via helper calls#~S~tructured only:R>\n"
                       "<#Show everything#Structured and ~u~nstructured:R>5>\n"
                       "<#If unchecked, only show try/catch#Show ~w~ind states:C>6>\n"
                       "<#Print messages in decompilation if settings caused states to be hidden#Inform user of ~h~idden "
                       "states:C>8>\n"
                       "<#Show as warning dialog#Warning behavior#Behavior on internal warning condition#As w~a~rning:R>\n"
                       "<#Show in output window#As ~m~essage:R>7>\n"
                       "<#Clear all per-function settings#Reset per-function settings:B10::::>\n"
                       "<#Clear internal caches#Rebuild C++ metadata caches:B11::::>\n"
                       "\n"
                       "\n",
              sub_2F7A0,
              v14,
              &v9,
              &v10,
              &v11,
              &v12,
              sub_2F9A0,
              sub_2F960) <= 0 )
    return (unsigned __int8)v15;
  v3 = ((v12 == 0) << 7) | v9 | ((v11 != 0) << 6) | (4 * (v10 != 0));
  result = 0;
  if ( v2 != v3 )
  {
    *(_BYTE *)(a1 + 10) = v3;
    v13[0] = 70;
    v13[1] = v3;
    sub_319D0(v13);
    v5 = "disabled";
    if ( (v3 & 3) != 0 )
    {
      v5 = "enabled (full)";
      if ( (v3 & 3) == 1 )
        v5 = "enabled (structured)";
    }
    v6 = "showing";
    v7 = "not showing";
    if ( (v3 & 4) != 0 )
      v7 = "showing";
    v8 = "message";
    if ( v3 < 0 )
      v8 = "warning";
    if ( (v3 & 0x40) == 0 )
      v6 = "not showing";
    sub_BD80(
      (__int64)"[EH34] Now globally %s, %s wind states, warning type = %s, %s hidden states. Refresh pseudocode views to see changes.\n",
      v5,
      v7,
      v8,
      v6);
    return 1;
  }
  return result;
}
