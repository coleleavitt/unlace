__int64 __fastcall sub_22538C0(const char **a1, __int64 a2)
{
  const char *v3; // r12
  size_t v4; // rax
  void *v5; // rdi
  size_t v6; // r13
  const char *v7; // r12
  _BYTE *v9; // rax
  size_t v10; // rbx
  _BYTE *v11; // rax
  __int64 (__fastcall **v12)(); // [rsp+0h] [rbp-8h] BYREF
  int vars0; // [rsp+8h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+10h] [rbp+8h]
  void *dest; // [rsp+20h] [rbp+18h]
  char vars20; // [rsp+28h] [rbp+20h]
  int vars24; // [rsp+2Ch] [rbp+24h]
  __int64 vars28; // [rsp+30h] [rbp+28h]
  int *vars48; // [rsp+50h] [rbp+48h]

  vars48 = &vars0;
  vars28 = a2;
  vars0 = 2;
  v12 = &off_2BEBEE0;
  vars20 = 0;
  vars24 = 1;
  dest = nullptr;
  vars8 = 0;
  sub_227B8B0(&v12, 0, 0, 0);
  v3 = *a1;
  switch ( *((_BYTE *)a1 + 32) )
  {
    case 2:
      sub_2253400((__int64)&vars0, *(_QWORD *)v3, *((_QWORD *)v3 + 1), v3[32]);
      sub_2253400((__int64)&vars0, *((_QWORD *)v3 + 2), *((_QWORD *)v3 + 3), v3[33]);
      break;
    case 3:
      if ( v3 )
      {
        v4 = strlen(*a1);
        v5 = dest;
        v6 = v4;
        if ( v4 <= *((_QWORD *)&vars8 + 1) - (_QWORD)dest )
          goto LABEL_14;
        goto LABEL_4;
      }
      break;
    case 4:
      sub_227BF10(&vars0, *(_QWORD *)v3, *((_QWORD *)v3 + 1));
      break;
    case 5:
    case 6:
      v5 = dest;
      v6 = (size_t)a1[1];
      if ( *((_QWORD *)&vars8 + 1) - (_QWORD)dest < v6 )
      {
LABEL_4:
        sub_227BF10(&vars0, v3, v6);
      }
      else
      {
LABEL_14:
        if ( v6 )
        {
          memcpy(v5, v3, v6);
          dest = (char *)dest + v6;
        }
      }
      break;
    case 7:
      sub_227C750(&vars0, *a1);
      break;
    case 8:
      v9 = dest;
      if ( (unsigned __int64)dest >= *((_QWORD *)&vars8 + 1) )
      {
        sub_227BA10(&vars0, (unsigned __int8)v3);
      }
      else
      {
        dest = (char *)dest + 1;
        *v9 = (_BYTE)v3;
      }
      break;
    case 9:
      sub_227B910(&vars0, (unsigned int)v3);
      break;
    case 0xA:
      sub_227B930(&vars0, (int)v3);
      break;
    case 0xB:
      sub_227B910(&vars0, *(_QWORD *)v3);
      break;
    case 0xC:
      sub_227B930(&vars0, *(_QWORD *)v3);
      break;
    case 0xD:
      sub_227B950(&vars0);
      break;
    case 0xE:
      sub_227B970(&vars0);
      break;
    case 0xF:
      sub_227B990(&vars0, *(_QWORD *)v3);
      break;
    default:
      break;
  }
  v7 = a1[2];
  switch ( *((_BYTE *)a1 + 33) )
  {
    case 2:
      sub_2253400((__int64)&vars0, *(_QWORD *)v7, *((_QWORD *)v7 + 1), v7[32]);
      sub_2253400((__int64)&vars0, *((_QWORD *)v7 + 2), *((_QWORD *)v7 + 3), v7[33]);
      break;
    case 3:
      if ( v7 )
      {
        v10 = strlen(a1[2]);
        goto LABEL_30;
      }
      break;
    case 4:
      sub_227BF10(&vars0, *(_QWORD *)v7, *((_QWORD *)v7 + 1));
      break;
    case 5:
    case 6:
      v10 = (size_t)a1[3];
LABEL_30:
      if ( v10 > *((_QWORD *)&vars8 + 1) - (_QWORD)dest )
      {
        sub_227BF10(&vars0, v7, v10);
      }
      else if ( v10 )
      {
        memcpy(dest, v7, v10);
        dest = (char *)dest + v10;
      }
      break;
    case 7:
      sub_227C750(&vars0, a1[2]);
      break;
    case 8:
      v11 = dest;
      if ( (unsigned __int64)dest >= *((_QWORD *)&vars8 + 1) )
      {
        sub_227BA10(&vars0, (unsigned __int8)v7);
      }
      else
      {
        dest = (char *)dest + 1;
        *v11 = (_BYTE)v7;
      }
      break;
    case 9:
      sub_227B910(&vars0, (unsigned int)v7);
      break;
    case 0xA:
      sub_227B930(&vars0, (int)v7);
      break;
    case 0xB:
      sub_227B910(&vars0, *(_QWORD *)v7);
      break;
    case 0xC:
      sub_227B930(&vars0, *(_QWORD *)v7);
      break;
    case 0xD:
      sub_227B950(&vars0);
      break;
    case 0xE:
      sub_227B970(&vars0);
      break;
    case 0xF:
      sub_227B990(&vars0, *(_QWORD *)v7);
      break;
    default:
      break;
  }
  v12 = (__int64 (__fastcall **)())&unk_2C76288;
  return sub_227B7A0(&vars0);
}
