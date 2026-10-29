__int64 __fastcall sub_2151110(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // r12
  int v4; // eax
  __int64 v5; // r13
  unsigned int v6; // ebp
  unsigned int v8; // r13d
  const char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // [rsp+8h] [rbp-70h] BYREF
  __int64 v14; // [rsp+10h] [rbp-68h] BYREF
  __int64 v15; // [rsp+18h] [rbp-60h]
  _QWORD v16[4]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v17; // [rsp+40h] [rbp-38h]

  if ( !(unsigned __int8)sub_2153CB0(*(_QWORD *)(a1 + 8), &v13) )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v3 = *(_BYTE *)(v2 + 193);
    if ( v3 || (v10 = *(_QWORD *)(*(_QWORD *)(v2 + 16) + 152LL), *(_QWORD *)(v10 + 56)) && **(_BYTE **)(v10 + 48) == 64 )
    {
      v4 = **(_DWORD **)(v2 + 48);
      if ( v4 == 26 )
        goto LABEL_19;
    }
    else
    {
      *(_BYTE *)(v2 + 193) = 1;
      v2 = *(_QWORD *)(a1 + 8);
      v4 = **(_DWORD **)(v2 + 48);
      if ( v4 == 26 )
      {
LABEL_19:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 152LL))(v2);
        v2 = *(_QWORD *)(a1 + 8);
        v4 = **(_DWORD **)(v2 + 48);
        if ( v4 == 2 )
        {
LABEL_8:
          v14 = 0;
          v5 = *(_QWORD *)(v2 + 184);
          v15 = 0;
          v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 160LL))(v2, &v14);
          if ( (_BYTE)v6 )
          {
            v2 = *(_QWORD *)(a1 + 8);
            v16[0] = "expected symbol type";
            v17 = 259;
LABEL_10:
            v6 = sub_21543E0(v2, v16, 0, 0);
LABEL_11:
            *(_BYTE *)(*(_QWORD *)(a1 + 8) + 193LL) = v3;
            return v6;
          }
          if ( v15 == 8 )
          {
            if ( *(_QWORD *)v14 == 0x434E55465F545453LL || *(_QWORD *)v14 == 0x6E6F6974636E7566LL )
            {
              v8 = 2;
LABEL_16:
              v2 = *(_QWORD *)(a1 + 8);
              if ( **(_DWORD **)(v2 + 48) == 9 )
              {
                (*(void (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v2 + 152LL))(v2, &v14, v14);
                (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 296LL))(
                  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
                  v13,
                  v8);
                goto LABEL_11;
              }
              v9 = "expected end of directive";
              goto LABEL_18;
            }
LABEL_42:
            v12 = *(_QWORD *)(a1 + 8);
            v16[0] = "unsupported attribute";
            v17 = 259;
            v6 = sub_2153E90(v12, v5, v16, 0, 0);
            goto LABEL_11;
          }
          if ( v15 == 10 )
          {
            if ( *(_QWORD *)v14 == 0x454A424F5F545453LL && *(_WORD *)(v14 + 8) == 21571 )
            {
LABEL_65:
              v8 = 4;
              goto LABEL_16;
            }
            if ( *(_QWORD *)v14 == 0x656A626F5F736C74LL && *(_WORD *)(v14 + 8) == 29795 )
            {
LABEL_60:
              v8 = 5;
              goto LABEL_16;
            }
            if ( *(_QWORD *)v14 == 0x4D4D4F435F545453LL && *(_WORD *)(v14 + 8) == 20047 )
              goto LABEL_67;
            if ( *(_QWORD *)v14 != 0x59544F4E5F545453LL || *(_WORD *)(v14 + 8) != 17744 )
              goto LABEL_42;
          }
          else
          {
            if ( v15 != 6 )
            {
              if ( v15 != 7 )
              {
                if ( v15 == 13 )
                {
                  if ( *(_QWORD *)v14 != 0x5F554E475F545453LL
                    || *(_DWORD *)(v14 + 8) != 1314211401
                    || *(_BYTE *)(v14 + 12) != 67 )
                  {
                    goto LABEL_42;
                  }
                }
                else
                {
                  if ( v15 != 21 )
                  {
                    if ( v15 == 17
                      && !(*(_QWORD *)v14 ^ 0x71696E755F756E67LL | *(_QWORD *)(v14 + 8) ^ 0x63656A626F5F6575LL)
                      && *(_BYTE *)(v14 + 16) == 116 )
                    {
                      v8 = 8;
                      goto LABEL_16;
                    }
                    goto LABEL_42;
                  }
                  if ( *(_QWORD *)v14 ^ 0x69646E695F756E67LL | *(_QWORD *)(v14 + 8) ^ 0x6E75665F74636572LL
                    || *(_DWORD *)(v14 + 16) != 1869182051
                    || *(_BYTE *)(v14 + 20) != 110 )
                  {
                    goto LABEL_42;
                  }
                }
                v8 = 3;
                goto LABEL_16;
              }
              if ( *(_DWORD *)v14 != 1599362131 || *(_WORD *)(v14 + 4) != 19540 || *(_BYTE *)(v14 + 6) != 83 )
                goto LABEL_42;
              goto LABEL_60;
            }
            if ( *(_DWORD *)v14 == 1701470831 && *(_WORD *)(v14 + 4) == 29795 )
              goto LABEL_65;
            if ( *(_DWORD *)v14 == 1835888483 && *(_WORD *)(v14 + 4) == 28271 )
            {
LABEL_67:
              v8 = 6;
              goto LABEL_16;
            }
            if ( *(_DWORD *)v14 != 2037673838 || *(_WORD *)(v14 + 4) != 25968 )
              goto LABEL_42;
          }
          v8 = 7;
          goto LABEL_16;
        }
LABEL_5:
        if ( (unsigned int)(v4 - 37) <= 1 || v4 == 3 )
        {
          if ( v4 == 3 )
            goto LABEL_8;
          goto LABEL_27;
        }
        if ( *(_BYTE *)(v2 + 193) )
        {
          if ( v4 == 46 )
          {
LABEL_27:
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 152LL))(v2);
            v2 = *(_QWORD *)(a1 + 8);
            goto LABEL_8;
          }
          v9 = "expected STT_<TYPE_IN_UPPER_CASE>, '#<type>', '@<type>', '%<type>' or \"<type>\"";
        }
        else
        {
          v9 = "expected STT_<TYPE_IN_UPPER_CASE>, '#<type>', '%<type>' or \"<type>\"";
        }
LABEL_18:
        v16[0] = v9;
        v17 = 259;
        goto LABEL_10;
      }
    }
    if ( v4 == 2 )
      goto LABEL_8;
    goto LABEL_5;
  }
  v11 = *(_QWORD *)(a1 + 8);
  v17 = 259;
  v16[0] = "expected identifier";
  return (unsigned int)sub_21543E0(v11, v16, 0, 0);
}
