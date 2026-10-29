size_t __fastcall sub_2253CC0(size_t *a1, _QWORD *a2)
{
  const char *v3; // r13
  size_t v4; // rax
  void *v5; // rdi
  size_t v6; // r14
  _QWORD *v7; // r13
  __int64 v8; // rax
  unsigned __int8 v10; // al
  size_t v11; // rbx
  _BYTE *v12; // rax
  size_t v13; // rbp
  _BYTE *v14; // rax
  __int64 (__fastcall **v15)(); // [rsp+0h] [rbp-68h] BYREF
  int v16; // [rsp+8h] [rbp-60h]
  __int128 v17; // [rsp+10h] [rbp-58h]
  void *dest; // [rsp+20h] [rbp-48h]
  char v19; // [rsp+28h] [rbp-40h]
  int v20; // [rsp+2Ch] [rbp-3Ch]
  _QWORD *v21; // [rsp+30h] [rbp-38h]

  if ( *((_BYTE *)a1 + 33) != 1 )
    goto LABEL_57;
  v10 = *((_BYTE *)a1 + 32);
  if ( v10 <= 1u )
    goto LABEL_57;
  switch ( v10 )
  {
    case 4u:
      return *(_QWORD *)*a1;
    case 6u:
      return *a1;
    case 3u:
      v11 = *a1;
      if ( *a1 )
        strlen((const char *)*a1);
      return v11;
    default:
LABEL_57:
      v16 = 2;
      v19 = 0;
      v15 = &off_2BEBEE0;
      v20 = 1;
      dest = nullptr;
      v17 = 0;
      v21 = a2;
      sub_227B8B0(&v15, 0, 0, 0);
      v3 = (const char *)*a1;
      switch ( *((_BYTE *)a1 + 32) )
      {
        case 2:
          sub_2253400((__int64)&v15, *(_QWORD *)v3, *((_QWORD *)v3 + 1), v3[32]);
          sub_2253400((__int64)&v15, *((_QWORD *)v3 + 2), *((_QWORD *)v3 + 3), v3[33]);
          break;
        case 3:
          if ( v3 )
          {
            v4 = strlen((const char *)*a1);
            v5 = dest;
            v6 = v4;
            if ( v4 <= *((_QWORD *)&v17 + 1) - (_QWORD)dest )
              goto LABEL_23;
            goto LABEL_5;
          }
          break;
        case 4:
          sub_227BF10(&v15, *(_QWORD *)v3, *((_QWORD *)v3 + 1));
          break;
        case 5:
        case 6:
          v5 = dest;
          v6 = a1[1];
          if ( *((_QWORD *)&v17 + 1) - (_QWORD)dest < v6 )
          {
LABEL_5:
            sub_227BF10(&v15, v3, v6);
          }
          else
          {
LABEL_23:
            if ( v6 )
            {
              memcpy(v5, v3, v6);
              dest = (char *)dest + v6;
            }
          }
          break;
        case 7:
          sub_227C750(&v15, *a1);
          break;
        case 8:
          v12 = dest;
          if ( (unsigned __int64)dest >= *((_QWORD *)&v17 + 1) )
          {
            sub_227BA10(&v15, (unsigned __int8)v3);
          }
          else
          {
            dest = (char *)dest + 1;
            *v12 = (_BYTE)v3;
          }
          break;
        case 9:
          sub_227B910(&v15, (unsigned int)v3);
          break;
        case 0xA:
          sub_227B930(&v15, (int)v3);
          break;
        case 0xB:
          sub_227B910(&v15, *(_QWORD *)v3);
          break;
        case 0xC:
          sub_227B930(&v15, *(_QWORD *)v3);
          break;
        case 0xD:
          sub_227B950(&v15);
          break;
        case 0xE:
          sub_227B970(&v15);
          break;
        case 0xF:
          sub_227B990(&v15, *(_QWORD *)v3);
          break;
        default:
          break;
      }
      v7 = (_QWORD *)a1[2];
      switch ( *((_BYTE *)a1 + 33) )
      {
        case 2:
          sub_2253400((__int64)&v15, *v7, v7[1], *((_BYTE *)v7 + 32));
          sub_2253400((__int64)&v15, v7[2], v7[3], *((_BYTE *)v7 + 33));
          break;
        case 3:
          if ( v7 )
          {
            v13 = strlen((const char *)a1[2]);
            goto LABEL_39;
          }
          break;
        case 4:
          sub_227BF10(&v15, *v7, v7[1]);
          break;
        case 5:
        case 6:
          v13 = a1[3];
LABEL_39:
          if ( v13 > *((_QWORD *)&v17 + 1) - (_QWORD)dest )
          {
            sub_227BF10(&v15, v7, v13);
          }
          else if ( v13 )
          {
            memcpy(dest, v7, v13);
            dest = (char *)dest + v13;
          }
          break;
        case 7:
          sub_227C750(&v15, a1[2]);
          break;
        case 8:
          v14 = dest;
          if ( (unsigned __int64)dest >= *((_QWORD *)&v17 + 1) )
          {
            sub_227BA10(&v15, (unsigned __int8)v7);
          }
          else
          {
            dest = (char *)dest + 1;
            *v14 = (_BYTE)v7;
          }
          break;
        case 9:
          sub_227B910(&v15, (unsigned int)v7);
          break;
        case 0xA:
          sub_227B930(&v15, (int)v7);
          break;
        case 0xB:
          sub_227B910(&v15, *v7);
          break;
        case 0xC:
          sub_227B930(&v15, *v7);
          break;
        case 0xD:
          sub_227B950(&v15);
          break;
        case 0xE:
          sub_227B970(&v15);
          break;
        case 0xF:
          sub_227B990(&v15, *v7);
          break;
        default:
          break;
      }
      v15 = (__int64 (__fastcall **)())&unk_2C76288;
      sub_227B7A0(&v15);
      v8 = a2[1];
      if ( (unsigned __int64)(v8 + 1) > a2[2] )
      {
        sub_2236E10((__int64)a2, a2 + 3, v8 + 1, 1);
        v8 = a2[1];
      }
      *(_BYTE *)(*a2 + v8) = 0;
      return *a2;
  }
}
