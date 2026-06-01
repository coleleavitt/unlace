char *__fastcall sub_721720(__int64 a1)
{
  char *result; // rax

  switch ( *(_WORD *)(a1 + 32) )
  {
    case 0:
      result = (_BYTE *)(&qword_260 + 5);
      break;
    case 1:
      result = (_BYTE *)(&qword_260 + 6);
      break;
    case 2:
      result = (_BYTE *)(&qword_260 + 7);
      break;
    case 3:
      result = (char *)&qword_268;
      break;
    case 4:
      result = (_BYTE *)(&qword_268 + 1);
      break;
    case 5:
      result = (_BYTE *)(&qword_268 + 2);
      break;
    case 6:
      result = (_BYTE *)(&qword_268 + 3);
      break;
    case 7:
      result = (_BYTE *)(&qword_268 + 4);
      break;
    case 8:
      result = (_BYTE *)(&qword_268 + 5);
      break;
    case 9:
      result = (_BYTE *)(&qword_268 + 6);
      break;
    case 0xA:
      result = (_BYTE *)(&qword_268 + 7);
      break;
    case 0xB:
      result = (char *)&dword_270;
      break;
    case 0xC:
      result = (_BYTE *)(&dword_270 + 1);
      break;
    case 0xD:
      result = (_BYTE *)(&dword_270 + 2);
      break;
    case 0xE:
      result = (_BYTE *)(&dword_270 + 3);
      break;
    case 0xF:
      result = (char *)&dword_274;
      break;
    case 0x10:
      result = (_BYTE *)(&dword_274 + 1);
      break;
    case 0x11:
      result = (_BYTE *)(&dword_274 + 2);
      break;
    case 0x12:
      result = (_BYTE *)(&dword_274 + 3);
      break;
    case 0x13:
      result = (char *)&dword_278;
      break;
    case 0x14:
      result = (_BYTE *)(&dword_278 + 1);
      break;
    case 0x15:
      result = (_BYTE *)(&dword_278 + 2);
      break;
    case 0x16:
      result = (_BYTE *)(&dword_278 + 3);
      break;
    case 0x17:
      result = "GNU";
      break;
    case 0x18:
      result = "GNU" + 1;
      break;
    case 0x19:
      result = "GNU" + 2;
      break;
    case 0x1A:
      result = "GNU" + 3;
      break;
    case 0x1B:
      result = byte_280;
      break;
    case 0x1C:
      result = byte_280 + 1;
      break;
    case 0x1D:
      result = byte_280 + 2;
      break;
    case 0x1E:
      result = byte_280 + 3;
      break;
    case 0x1F:
      result = byte_280 + 4;
      break;
    case 0x20:
      result = byte_280 + 5;
      break;
    case 0x21:
      result = byte_280 + 6;
      break;
    case 0x22:
      result = byte_280 + 7;
      break;
    case 0x23:
      result = byte_280 + 8;
      break;
    case 0x24:
      result = byte_280 + 9;
      break;
    case 0x25:
      result = byte_280 + 10;
      break;
    case 0x26:
      result = byte_280 + 11;
      break;
    case 0x27:
      result = byte_280 + 12;
      break;
    case 0x28:
      result = byte_280 + 13;
      break;
    case 0x29:
      result = byte_280 + 14;
      break;
    case 0x2A:
      result = byte_280 + 15;
      break;
    case 0x2B:
      result = byte_280 + 16;
      break;
    case 0x2C:
      result = byte_280 + 17;
      break;
    case 0x2D:
      result = byte_280 + 18;
      break;
    case 0x2E:
      result = byte_280 + 19;
      break;
    case 0x2F:
      result = algn_294;
      break;
    case 0x30:
      result = algn_294 + 1;
      break;
    case 0x31:
      result = algn_294 + 2;
      break;
    case 0x32:
      result = algn_294 + 3;
      break;
    case 0x33:
      result = (char *)&elf_gnu_hash_nbuckets;
      break;
    case 0x34:
      result = (_BYTE *)(&elf_gnu_hash_nbuckets + 1);
      break;
    case 0x35:
      result = (_BYTE *)(&elf_gnu_hash_nbuckets + 2);
      break;
    case 0x36:
      result = (_BYTE *)(&elf_gnu_hash_nbuckets + 3);
      break;
    case 0x37:
      result = (char *)&elf_gnu_hash_symbias;
      break;
    case 0x38:
      result = (_BYTE *)(&elf_gnu_hash_symbias + 1);
      break;
    case 0x39:
      result = (_BYTE *)(&elf_gnu_hash_symbias + 2);
      break;
    case 0x3A:
      result = (_BYTE *)(&elf_gnu_hash_symbias + 3);
      break;
    case 0x3B:
      result = (char *)&elf_gnu_hash_bitmask_nwords;
      break;
    case 0x3C:
      result = (_BYTE *)(&elf_gnu_hash_bitmask_nwords + 1);
      break;
    case 0x3D:
      result = (_BYTE *)(&elf_gnu_hash_bitmask_nwords + 2);
      break;
    case 0x3E:
      result = (_BYTE *)(&elf_gnu_hash_bitmask_nwords + 3);
      break;
    case 0x3F:
      result = (char *)&elf_gnu_hash_shift;
      break;
    case 0x40:
      result = (_BYTE *)(&elf_gnu_hash_shift + 1);
      break;
    case 0x41:
      result = (_BYTE *)(&elf_gnu_hash_shift + 2);
      break;
    case 0x42:
      result = (_BYTE *)(&elf_gnu_hash_shift + 3);
      break;
    case 0x43:
      result = (_BYTE *)elf_gnu_hash_indexes;
      break;
    case 0x44:
      result = (_BYTE *)(elf_gnu_hash_indexes + 1);
      break;
    case 0x45:
      result = (_BYTE *)(elf_gnu_hash_indexes + 2);
      break;
    case 0x46:
      result = (_BYTE *)(elf_gnu_hash_indexes + 3);
      break;
    case 0x47:
      result = (_BYTE *)(elf_gnu_hash_indexes + 4);
      break;
    case 0x48:
      result = (_BYTE *)(elf_gnu_hash_indexes + 5);
      break;
    case 0x49:
      result = (_BYTE *)(elf_gnu_hash_indexes + 6);
      break;
    case 0x4A:
      result = (_BYTE *)(elf_gnu_hash_indexes + 7);
      break;
    case 0x4B:
      result = (_BYTE *)(elf_gnu_hash_indexes + 8);
      break;
    case 0x4C:
      result = (_BYTE *)(elf_gnu_hash_indexes + 9);
      break;
    case 0x4D:
      result = (_BYTE *)(elf_gnu_hash_indexes + 10);
      break;
    case 0x4E:
      result = (_BYTE *)(elf_gnu_hash_indexes + 11);
      break;
    case 0x4F:
      result = (_BYTE *)(elf_gnu_hash_indexes + 12);
      break;
    case 0x50:
      result = (_BYTE *)(elf_gnu_hash_indexes + 13);
      break;
    case 0x51:
      result = (_BYTE *)(elf_gnu_hash_indexes + 14);
      break;
    case 0x52:
      result = (_BYTE *)(elf_gnu_hash_indexes + 15);
      break;
    case 0x53:
      result = (_BYTE *)(elf_gnu_hash_indexes + 16);
      break;
    case 0x54:
      result = (_BYTE *)(elf_gnu_hash_indexes + 17);
      break;
    case 0x55:
      result = (_BYTE *)(elf_gnu_hash_indexes + 18);
      break;
    case 0x56:
      result = (_BYTE *)(elf_gnu_hash_indexes + 19);
      break;
    case 0x57:
      result = (_BYTE *)(elf_gnu_hash_indexes + 20);
      break;
    case 0x58:
      result = (_BYTE *)(elf_gnu_hash_indexes + 21);
      break;
    case 0x59:
      result = (_BYTE *)(elf_gnu_hash_indexes + 22);
      break;
    case 0x5A:
      result = (_BYTE *)(elf_gnu_hash_indexes + 23);
      break;
    case 0x5B:
      result = (_BYTE *)(elf_gnu_hash_indexes + 24);
      break;
    case 0x5C:
      result = (_BYTE *)(elf_gnu_hash_indexes + 25);
      break;
    case 0x5D:
      result = (_BYTE *)(elf_gnu_hash_indexes + 26);
      break;
    case 0x5E:
      result = (_BYTE *)(elf_gnu_hash_indexes + 27);
      break;
    case 0x5F:
      result = (_BYTE *)(elf_gnu_hash_indexes + 28);
      break;
    case 0x60:
      result = (_BYTE *)(elf_gnu_hash_indexes + 29);
      break;
    case 0x61:
      result = (_BYTE *)(elf_gnu_hash_indexes + 30);
      break;
    case 0x62:
      result = (_BYTE *)(elf_gnu_hash_indexes + 31);
      break;
    case 0x63:
      result = (_BYTE *)(elf_gnu_hash_indexes + 32);
      break;
    case 0x64:
      result = (_BYTE *)(elf_gnu_hash_indexes + 33);
      break;
    case 0x65:
      result = (_BYTE *)(elf_gnu_hash_indexes + 34);
      break;
    case 0x66:
      result = (_BYTE *)(elf_gnu_hash_indexes + 35);
      break;
    case 0x67:
      result = (_BYTE *)(elf_gnu_hash_indexes + 36);
      break;
    case 0x68:
      result = (_BYTE *)(elf_gnu_hash_indexes + 37);
      break;
    case 0x69:
      result = (_BYTE *)(elf_gnu_hash_indexes + 38);
      break;
    case 0x6A:
      result = (_BYTE *)(elf_gnu_hash_indexes + 39);
      break;
    case 0x6B:
      result = (_BYTE *)(elf_gnu_hash_indexes + 40);
      break;
    case 0x6C:
      result = (_BYTE *)(elf_gnu_hash_indexes + 41);
      break;
    case 0x6D:
      result = (_BYTE *)(elf_gnu_hash_indexes + 42);
      break;
    case 0x6E:
      result = (_BYTE *)(elf_gnu_hash_indexes + 43);
      break;
    case 0x6F:
      result = (_BYTE *)(elf_gnu_hash_indexes + 44);
      break;
    case 0x70:
      result = (_BYTE *)(elf_gnu_hash_indexes + 45);
      break;
    case 0x71:
      result = (_BYTE *)(elf_gnu_hash_indexes + 46);
      break;
    case 0x72:
      result = (_BYTE *)(elf_gnu_hash_indexes + 47);
      break;
    case 0x73:
      result = (_BYTE *)(elf_gnu_hash_indexes + 48);
      break;
    case 0x74:
      result = (_BYTE *)(elf_gnu_hash_indexes + 49);
      break;
    case 0x75:
      result = (_BYTE *)(elf_gnu_hash_indexes + 50);
      break;
    case 0x76:
      result = (_BYTE *)(elf_gnu_hash_indexes + 51);
      break;
    case 0x77:
      result = (_BYTE *)(elf_gnu_hash_indexes + 52);
      break;
    case 0x78:
      result = (_BYTE *)(elf_gnu_hash_indexes + 53);
      break;
    case 0x79:
      result = (_BYTE *)(elf_gnu_hash_indexes + 54);
      break;
    case 0x7A:
      result = (_BYTE *)(elf_gnu_hash_indexes + 55);
      break;
    case 0x7B:
      result = (_BYTE *)(elf_gnu_hash_indexes + 56);
      break;
    case 0x7C:
      result = (_BYTE *)(elf_gnu_hash_indexes + 57);
      break;
    case 0x7D:
      result = (_BYTE *)(elf_gnu_hash_indexes + 58);
      break;
    case 0x7E:
      result = (_BYTE *)(elf_gnu_hash_indexes + 59);
      break;
    case 0x7F:
      result = (_BYTE *)(elf_gnu_hash_indexes + 60);
      break;
    case 0x80:
      result = (_BYTE *)(elf_gnu_hash_indexes + 61);
      break;
    case 0x81:
      result = (_BYTE *)(elf_gnu_hash_indexes + 62);
      break;
    case 0x82:
      result = (_BYTE *)(elf_gnu_hash_indexes + 63);
      break;
    case 0x83:
      result = (_BYTE *)(elf_gnu_hash_indexes + 64);
      break;
    case 0x84:
      result = (_BYTE *)(elf_gnu_hash_indexes + 65);
      break;
    case 0x85:
      result = (_BYTE *)(elf_gnu_hash_indexes + 66);
      break;
    case 0x86:
      result = (_BYTE *)(elf_gnu_hash_indexes + 67);
      break;
    case 0x87:
      result = (_BYTE *)(elf_gnu_hash_indexes + 68);
      break;
    case 0x88:
      result = (_BYTE *)(elf_gnu_hash_indexes + 69);
      break;
    case 0x89:
      result = (_BYTE *)(elf_gnu_hash_indexes + 70);
      break;
    case 0x8A:
      result = (_BYTE *)(elf_gnu_hash_indexes + 71);
      break;
    case 0x8B:
      result = (_BYTE *)(elf_gnu_hash_indexes + 72);
      break;
    case 0x8C:
      result = (_BYTE *)(elf_gnu_hash_indexes + 73);
      break;
    case 0x8D:
      result = (_BYTE *)(elf_gnu_hash_indexes + 74);
      break;
    case 0x8E:
      result = (_BYTE *)(elf_gnu_hash_indexes + 75);
      break;
    case 0x8F:
      result = (_BYTE *)(elf_gnu_hash_indexes + 76);
      break;
    case 0x90:
      result = (_BYTE *)(elf_gnu_hash_indexes + 77);
      break;
    case 0x91:
      result = (_BYTE *)(elf_gnu_hash_indexes + 78);
      break;
    case 0x92:
      result = (_BYTE *)(elf_gnu_hash_indexes + 79);
      break;
    case 0x93:
      result = (_BYTE *)(elf_gnu_hash_indexes + 80);
      break;
    case 0x94:
      result = (_BYTE *)(elf_gnu_hash_indexes + 81);
      break;
    case 0x95:
      result = (_BYTE *)(elf_gnu_hash_indexes + 82);
      break;
    case 0x96:
      result = (_BYTE *)(elf_gnu_hash_indexes + 83);
      break;
    case 0x97:
      result = (_BYTE *)(elf_gnu_hash_indexes + 84);
      break;
    case 0x98:
      result = (_BYTE *)(elf_gnu_hash_indexes + 85);
      break;
    case 0x99:
      result = (_BYTE *)(elf_gnu_hash_indexes + 86);
      break;
    case 0x9A:
      result = (_BYTE *)(elf_gnu_hash_indexes + 87);
      break;
    case 0x9B:
      result = (_BYTE *)(elf_gnu_hash_indexes + 88);
      break;
    case 0x9C:
      result = (_BYTE *)(elf_gnu_hash_indexes + 89);
      break;
    case 0x9D:
      result = (_BYTE *)(elf_gnu_hash_indexes + 90);
      break;
    case 0x9E:
      result = (_BYTE *)(elf_gnu_hash_indexes + 91);
      break;
    case 0x9F:
      result = (_BYTE *)(elf_gnu_hash_indexes + 92);
      break;
    case 0xA0:
      result = (_BYTE *)(elf_gnu_hash_indexes + 93);
      break;
    case 0xA1:
      result = (_BYTE *)(elf_gnu_hash_indexes + 94);
      break;
    case 0xA2:
      result = (_BYTE *)(elf_gnu_hash_indexes + 95);
      break;
    case 0xA3:
      result = (_BYTE *)(elf_gnu_hash_indexes + 96);
      break;
    case 0xA4:
      result = (_BYTE *)(elf_gnu_hash_indexes + 97);
      break;
    case 0xA5:
      result = (_BYTE *)(elf_gnu_hash_indexes + 98);
      break;
    case 0xA6:
      result = (_BYTE *)(elf_gnu_hash_indexes + 99);
      break;
    case 0xA7:
      result = (_BYTE *)(elf_gnu_hash_indexes + 100);
      break;
    case 0xA8:
      result = (_BYTE *)(elf_gnu_hash_indexes + 101);
      break;
    case 0xA9:
      result = (_BYTE *)(elf_gnu_hash_indexes + 102);
      break;
    case 0xAA:
      result = (_BYTE *)(elf_gnu_hash_indexes + 103);
      break;
    case 0xAB:
      result = (_BYTE *)(elf_gnu_hash_indexes + 104);
      break;
    case 0xAC:
      result = (_BYTE *)(elf_gnu_hash_indexes + 105);
      break;
    case 0xAD:
      result = (_BYTE *)(elf_gnu_hash_indexes + 106);
      break;
    case 0xAE:
      result = (_BYTE *)(elf_gnu_hash_indexes + 107);
      break;
    case 0xAF:
      result = (_BYTE *)(elf_gnu_hash_indexes + 108);
      break;
    case 0xB0:
      result = (_BYTE *)(elf_gnu_hash_indexes + 109);
      break;
    case 0xB1:
      result = (_BYTE *)(elf_gnu_hash_indexes + 110);
      break;
    case 0xB2:
      result = (_BYTE *)(elf_gnu_hash_indexes + 111);
      break;
    case 0xB3:
      result = (_BYTE *)(elf_gnu_hash_indexes + 112);
      break;
    case 0xB4:
      result = (_BYTE *)(elf_gnu_hash_indexes + 113);
      break;
    case 0xB5:
      result = (_BYTE *)(elf_gnu_hash_indexes + 114);
      break;
    case 0xB6:
      result = (_BYTE *)(elf_gnu_hash_indexes + 115);
      break;
    case 0xB7:
      result = (_BYTE *)(elf_gnu_hash_indexes + 116);
      break;
    case 0xB8:
      result = (_BYTE *)(elf_gnu_hash_indexes + 117);
      break;
    case 0xB9:
      result = (_BYTE *)(elf_gnu_hash_indexes + 118);
      break;
    case 0xBA:
      result = (_BYTE *)(elf_gnu_hash_indexes + 119);
      break;
    case 0xBB:
      result = (_BYTE *)(elf_gnu_hash_indexes + 120);
      break;
    case 0xBC:
      result = (_BYTE *)(elf_gnu_hash_indexes + 121);
      break;
    case 0xBD:
      result = (_BYTE *)(elf_gnu_hash_indexes + 122);
      break;
    case 0xBE:
      result = (_BYTE *)(elf_gnu_hash_indexes + 123);
      break;
    case 0xBF:
      result = (_BYTE *)(elf_gnu_hash_indexes + 124);
      break;
    case 0xC0:
      result = (_BYTE *)(elf_gnu_hash_indexes + 125);
      break;
    case 0xC1:
      result = (_BYTE *)(elf_gnu_hash_indexes + 126);
      break;
    case 0xC2:
      result = (_BYTE *)(elf_gnu_hash_indexes + 127);
      break;
    case 0xC3:
      result = (_BYTE *)(elf_gnu_hash_indexes + 128);
      break;
    case 0xC4:
      result = (_BYTE *)(elf_gnu_hash_indexes + 129);
      break;
    case 0xC5:
      result = (_BYTE *)(elf_gnu_hash_indexes + 130);
      break;
    case 0xC6:
      result = (_BYTE *)(elf_gnu_hash_indexes + 131);
      break;
    case 0xC7:
      result = (_BYTE *)(elf_gnu_hash_indexes + 132);
      break;
    case 0xC8:
      result = (_BYTE *)(elf_gnu_hash_indexes + 133);
      break;
    case 0xC9:
      result = (_BYTE *)(elf_gnu_hash_indexes + 134);
      break;
    case 0xCA:
      result = (_BYTE *)(elf_gnu_hash_indexes + 135);
      break;
    case 0xCB:
      result = (_BYTE *)(elf_gnu_hash_indexes + 136);
      break;
    case 0xCC:
      result = (_BYTE *)(elf_gnu_hash_indexes + 137);
      break;
    case 0xCD:
      result = (_BYTE *)(elf_gnu_hash_indexes + 138);
      break;
    case 0xCE:
      result = (_BYTE *)(elf_gnu_hash_indexes + 139);
      break;
    case 0xCF:
      result = (_BYTE *)(elf_gnu_hash_indexes + 140);
      break;
    case 0xD0:
      result = (_BYTE *)(elf_gnu_hash_indexes + 141);
      break;
    case 0xD1:
      result = (_BYTE *)(elf_gnu_hash_indexes + 142);
      break;
    case 0xD2:
      result = (_BYTE *)(elf_gnu_hash_indexes + 143);
      break;
    case 0xD3:
      result = (_BYTE *)(elf_gnu_hash_indexes + 144);
      break;
    case 0xD4:
      result = (_BYTE *)(elf_gnu_hash_indexes + 145);
      break;
    case 0xD5:
      result = (_BYTE *)(elf_gnu_hash_indexes + 146);
      break;
    case 0xD6:
      result = (_BYTE *)(elf_gnu_hash_indexes + 147);
      break;
    case 0xD7:
      result = (_BYTE *)(elf_gnu_hash_indexes + 148);
      break;
    case 0xD8:
      result = (_BYTE *)(elf_gnu_hash_indexes + 149);
      break;
    case 0xD9:
      result = (_BYTE *)(elf_gnu_hash_indexes + 150);
      break;
    case 0xDA:
      result = (_BYTE *)(elf_gnu_hash_indexes + 151);
      break;
    case 0xDB:
      result = (_BYTE *)(elf_gnu_hash_indexes + 152);
      break;
    case 0xDC:
      result = (_BYTE *)(elf_gnu_hash_indexes + 153);
      break;
    case 0xDD:
      result = (_BYTE *)(elf_gnu_hash_indexes + 154);
      break;
    case 0xDE:
      result = (_BYTE *)(elf_gnu_hash_indexes + 155);
      break;
    case 0xDF:
      result = (_BYTE *)(elf_gnu_hash_indexes + 156);
      break;
    case 0xE0:
      result = (_BYTE *)(elf_gnu_hash_indexes + 157);
      break;
    case 0xE1:
      result = (_BYTE *)(elf_gnu_hash_indexes + 158);
      break;
    case 0xE2:
      result = (_BYTE *)(elf_gnu_hash_indexes + 159);
      break;
    case 0xE3:
      result = (_BYTE *)(elf_gnu_hash_indexes + 160);
      break;
    case 0xE4:
      result = (_BYTE *)(elf_gnu_hash_indexes + 161);
      break;
    case 0xE5:
      result = (_BYTE *)(elf_gnu_hash_indexes + 162);
      break;
    case 0xE6:
      result = (_BYTE *)(elf_gnu_hash_indexes + 163);
      break;
    case 0xE7:
      result = (_BYTE *)(elf_gnu_hash_indexes + 164);
      break;
    case 0xE8:
      result = (_BYTE *)(elf_gnu_hash_indexes + 165);
      break;
    case 0xE9:
      result = (_BYTE *)(elf_gnu_hash_indexes + 166);
      break;
    case 0xEA:
      result = (_BYTE *)(elf_gnu_hash_indexes + 167);
      break;
    case 0xEB:
      result = (_BYTE *)(elf_gnu_hash_indexes + 168);
      break;
    case 0xEC:
      result = (_BYTE *)(elf_gnu_hash_indexes + 169);
      break;
    case 0xED:
      result = (_BYTE *)(elf_gnu_hash_indexes + 170);
      break;
    case 0xEE:
      result = (_BYTE *)(elf_gnu_hash_indexes + 171);
      break;
    case 0xEF:
      result = (_BYTE *)(elf_gnu_hash_indexes + 172);
      break;
    case 0xF0:
      result = (_BYTE *)(elf_gnu_hash_indexes + 173);
      break;
    case 0xF1:
      result = (_BYTE *)(elf_gnu_hash_indexes + 174);
      break;
    case 0xF2:
      result = (_BYTE *)(elf_gnu_hash_indexes + 175);
      break;
    case 0xF3:
      result = (_BYTE *)(elf_gnu_hash_indexes + 176);
      break;
    case 0xF4:
      result = (_BYTE *)(elf_gnu_hash_indexes + 177);
      break;
    case 0xF5:
      result = (_BYTE *)(elf_gnu_hash_indexes + 178);
      break;
    case 0xF6:
      result = (_BYTE *)(elf_gnu_hash_indexes + 179);
      break;
    case 0xF7:
      result = (_BYTE *)(elf_gnu_hash_indexes + 180);
      break;
    case 0xF8:
      result = (_BYTE *)(elf_gnu_hash_indexes + 181);
      break;
    case 0xF9:
      result = (_BYTE *)(elf_gnu_hash_indexes + 182);
      break;
    case 0xFA:
      result = (_BYTE *)(elf_gnu_hash_indexes + 183);
      break;
    case 0xFB:
      result = (_BYTE *)(elf_gnu_hash_indexes + 184);
      break;
    case 0xFC:
      result = (_BYTE *)(elf_gnu_hash_indexes + 185);
      break;
    case 0xFD:
      result = (_BYTE *)(elf_gnu_hash_indexes + 186);
      break;
    case 0xFE:
      result = (_BYTE *)(elf_gnu_hash_indexes + 187);
      break;
    case 0xFF:
      result = (_BYTE *)(elf_gnu_hash_indexes + 188);
      break;
    case 0x100:
      result = (_BYTE *)(elf_gnu_hash_indexes + 189);
      break;
    case 0x101:
      result = (_BYTE *)(elf_gnu_hash_indexes + 190);
      break;
    case 0x102:
      result = (_BYTE *)(elf_gnu_hash_indexes + 191);
      break;
    case 0x103:
      result = (_BYTE *)(elf_gnu_hash_indexes + 192);
      break;
    case 0x104:
      result = (_BYTE *)(elf_gnu_hash_indexes + 193);
      break;
    case 0x105:
      result = (_BYTE *)(elf_gnu_hash_indexes + 194);
      break;
    case 0x106:
      result = (_BYTE *)(elf_gnu_hash_indexes + 195);
      break;
    case 0x107:
      result = (_BYTE *)(elf_gnu_hash_indexes + 196);
      break;
    case 0x108:
      result = (_BYTE *)(elf_gnu_hash_indexes + 197);
      break;
    case 0x109:
      result = (_BYTE *)(elf_gnu_hash_indexes + 198);
      break;
    case 0x10A:
      result = (_BYTE *)(elf_gnu_hash_indexes + 199);
      break;
    case 0x10B:
      result = (_BYTE *)(elf_gnu_hash_indexes + 200);
      break;
    case 0x10C:
      result = (_BYTE *)(elf_gnu_hash_indexes + 201);
      break;
    case 0x10D:
      result = (_BYTE *)(elf_gnu_hash_indexes + 202);
      break;
    case 0x10E:
      result = (_BYTE *)(elf_gnu_hash_indexes + 203);
      break;
    case 0x10F:
      result = (_BYTE *)(elf_gnu_hash_indexes + 204);
      break;
    case 0x110:
      result = (_BYTE *)(elf_gnu_hash_indexes + 205);
      break;
    case 0x111:
      result = (_BYTE *)(elf_gnu_hash_indexes + 206);
      break;
    case 0x112:
      result = (_BYTE *)(elf_gnu_hash_indexes + 207);
      break;
    case 0x113:
      result = (_BYTE *)(elf_gnu_hash_indexes + 208);
      break;
    case 0x114:
      result = (_BYTE *)(elf_gnu_hash_indexes + 209);
      break;
    case 0x115:
      result = (_BYTE *)(elf_gnu_hash_indexes + 210);
      break;
    case 0x116:
      result = (_BYTE *)(elf_gnu_hash_indexes + 211);
      break;
    case 0x117:
      result = (_BYTE *)(elf_gnu_hash_indexes + 212);
      break;
    case 0x118:
      result = (_BYTE *)(elf_gnu_hash_indexes + 213);
      break;
    case 0x119:
      result = (_BYTE *)(elf_gnu_hash_indexes + 214);
      break;
    case 0x11A:
      result = (_BYTE *)(elf_gnu_hash_indexes + 215);
      break;
    case 0x11B:
      result = (_BYTE *)(elf_gnu_hash_indexes + 216);
      break;
    case 0x11C:
      result = (_BYTE *)(elf_gnu_hash_indexes + 217);
      break;
    case 0x11D:
      result = (_BYTE *)(elf_gnu_hash_indexes + 218);
      break;
    case 0x11E:
      result = (_BYTE *)(elf_gnu_hash_indexes + 219);
      break;
    case 0x11F:
      result = (_BYTE *)(elf_gnu_hash_indexes + 220);
      break;
    case 0x120:
      result = (_BYTE *)(elf_gnu_hash_indexes + 221);
      break;
    case 0x121:
      result = (_BYTE *)(elf_gnu_hash_indexes + 222);
      break;
    case 0x122:
      result = (_BYTE *)(elf_gnu_hash_indexes + 223);
      break;
    case 0x123:
      result = (_BYTE *)(elf_gnu_hash_indexes + 224);
      break;
    case 0x124:
      result = (_BYTE *)(elf_gnu_hash_indexes + 225);
      break;
    case 0x125:
      result = (_BYTE *)(elf_gnu_hash_indexes + 226);
      break;
    case 0x126:
      result = (_BYTE *)(elf_gnu_hash_indexes + 227);
      break;
    case 0x127:
      result = (_BYTE *)(elf_gnu_hash_indexes + 228);
      break;
    case 0x128:
      result = (_BYTE *)(elf_gnu_hash_indexes + 229);
      break;
    case 0x129:
      result = (_BYTE *)(elf_gnu_hash_indexes + 230);
      break;
    case 0x12A:
      result = (_BYTE *)(elf_gnu_hash_indexes + 231);
      break;
    case 0x12B:
      result = (_BYTE *)(elf_gnu_hash_indexes + 232);
      break;
    case 0x12C:
      result = (_BYTE *)(elf_gnu_hash_indexes + 233);
      break;
    case 0x12D:
      result = (_BYTE *)(elf_gnu_hash_indexes + 234);
      break;
    case 0x12E:
      result = (_BYTE *)(elf_gnu_hash_indexes + 235);
      break;
    case 0x12F:
      result = (_BYTE *)(elf_gnu_hash_indexes + 236);
      break;
    case 0x130:
      result = (_BYTE *)(elf_gnu_hash_indexes + 237);
      break;
    case 0x131:
      result = (_BYTE *)(elf_gnu_hash_indexes + 238);
      break;
    case 0x132:
      result = (_BYTE *)(elf_gnu_hash_indexes + 239);
      break;
    case 0x133:
      result = (_BYTE *)(elf_gnu_hash_indexes + 240);
      break;
    case 0x134:
      result = (_BYTE *)(elf_gnu_hash_indexes + 241);
      break;
    case 0x135:
      result = (_BYTE *)(elf_gnu_hash_indexes + 242);
      break;
    case 0x136:
      result = (_BYTE *)(elf_gnu_hash_indexes + 243);
      break;
    case 0x137:
      result = (_BYTE *)(elf_gnu_hash_indexes + 244);
      break;
    case 0x138:
      result = (_BYTE *)(elf_gnu_hash_indexes + 245);
      break;
    case 0x139:
      result = (_BYTE *)(elf_gnu_hash_indexes + 246);
      break;
    case 0x13A:
      result = (_BYTE *)(elf_gnu_hash_indexes + 247);
      break;
    case 0x13B:
      result = (_BYTE *)(elf_gnu_hash_indexes + 248);
      break;
    case 0x13C:
      result = (_BYTE *)(elf_gnu_hash_indexes + 249);
      break;
    case 0x13D:
      result = (_BYTE *)(elf_gnu_hash_indexes + 250);
      break;
    case 0x13E:
      result = (_BYTE *)(elf_gnu_hash_indexes + 251);
      break;
    case 0x13F:
      result = (_BYTE *)(elf_gnu_hash_indexes + 252);
      break;
    case 0x140:
      result = (_BYTE *)(elf_gnu_hash_indexes + 253);
      break;
    case 0x141:
      result = (_BYTE *)(elf_gnu_hash_indexes + 254);
      break;
    case 0x142:
      result = (_BYTE *)(elf_gnu_hash_indexes + 255);
      break;
    case 0x143:
      result = (_BYTE *)(elf_gnu_hash_indexes + 256);
      break;
    case 0x144:
      result = (_BYTE *)(elf_gnu_hash_indexes + 257);
      break;
    case 0x145:
      result = (_BYTE *)(elf_gnu_hash_indexes + 258);
      break;
    case 0x146:
      result = (_BYTE *)(elf_gnu_hash_indexes + 259);
      break;
    case 0x147:
      result = (_BYTE *)(elf_gnu_hash_indexes + 260);
      break;
    case 0x148:
      result = (_BYTE *)(elf_gnu_hash_indexes + 261);
      break;
    case 0x149:
      result = (_BYTE *)(elf_gnu_hash_indexes + 262);
      break;
    case 0x14A:
      result = (_BYTE *)(elf_gnu_hash_indexes + 263);
      break;
    case 0x14B:
      result = (_BYTE *)(elf_gnu_hash_indexes + 264);
      break;
    case 0x14C:
      result = (_BYTE *)(elf_gnu_hash_indexes + 265);
      break;
    case 0x14D:
      result = (_BYTE *)(elf_gnu_hash_indexes + 266);
      break;
    case 0x14E:
      result = (_BYTE *)(elf_gnu_hash_indexes + 267);
      break;
    case 0x14F:
      result = (_BYTE *)(elf_gnu_hash_indexes + 268);
      break;
    case 0x150:
      result = (_BYTE *)(elf_gnu_hash_indexes + 269);
      break;
    case 0x151:
      result = (_BYTE *)(elf_gnu_hash_indexes + 270);
      break;
    case 0x152:
      result = (_BYTE *)(elf_gnu_hash_indexes + 271);
      break;
    case 0x153:
      result = (_BYTE *)(elf_gnu_hash_indexes + 272);
      break;
    case 0x154:
      result = (_BYTE *)(elf_gnu_hash_indexes + 273);
      break;
    case 0x155:
      result = (_BYTE *)(elf_gnu_hash_indexes + 274);
      break;
    case 0x156:
      result = (_BYTE *)(elf_gnu_hash_indexes + 275);
      break;
    case 0x157:
      result = (_BYTE *)(elf_gnu_hash_indexes + 276);
      break;
    case 0x158:
      result = (_BYTE *)(elf_gnu_hash_indexes + 277);
      break;
    case 0x159:
      result = (_BYTE *)(elf_gnu_hash_indexes + 278);
      break;
    case 0x15A:
      result = (_BYTE *)(elf_gnu_hash_indexes + 279);
      break;
    case 0x15B:
      result = (_BYTE *)(elf_gnu_hash_indexes + 280);
      break;
    case 0x15C:
      result = (_BYTE *)(elf_gnu_hash_indexes + 281);
      break;
    case 0x15D:
      result = (_BYTE *)(elf_gnu_hash_indexes + 282);
      break;
    case 0x15E:
      result = (_BYTE *)(elf_gnu_hash_indexes + 283);
      break;
    case 0x15F:
      result = (_BYTE *)(elf_gnu_hash_indexes + 284);
      break;
    case 0x160:
      result = (_BYTE *)(elf_gnu_hash_indexes + 285);
      break;
    case 0x161:
      result = (_BYTE *)(elf_gnu_hash_indexes + 286);
      break;
    case 0x162:
      result = (_BYTE *)(elf_gnu_hash_indexes + 287);
      break;
    case 0x163:
      result = (_BYTE *)(elf_gnu_hash_indexes + 288);
      break;
    case 0x164:
      result = (_BYTE *)(elf_gnu_hash_indexes + 289);
      break;
    case 0x165:
      result = (_BYTE *)(elf_gnu_hash_indexes + 290);
      break;
    case 0x166:
      result = (_BYTE *)(elf_gnu_hash_indexes + 291);
      break;
    case 0x167:
      result = (_BYTE *)(elf_gnu_hash_indexes + 292);
      break;
    case 0x168:
      result = (_BYTE *)(elf_gnu_hash_indexes + 293);
      break;
    case 0x169:
      result = (_BYTE *)(elf_gnu_hash_indexes + 294);
      break;
    case 0x16A:
      result = (_BYTE *)(elf_gnu_hash_indexes + 295);
      break;
    case 0x16B:
      result = (_BYTE *)(elf_gnu_hash_indexes + 296);
      break;
    case 0x16C:
      result = (_BYTE *)(elf_gnu_hash_indexes + 297);
      break;
    case 0x16D:
      result = (_BYTE *)(elf_gnu_hash_indexes + 298);
      break;
    case 0x16E:
      result = (_BYTE *)(elf_gnu_hash_indexes + 299);
      break;
    case 0x16F:
      result = (_BYTE *)(elf_gnu_hash_indexes + 300);
      break;
    case 0x170:
      result = (_BYTE *)(elf_gnu_hash_indexes + 301);
      break;
    case 0x171:
      result = (_BYTE *)(elf_gnu_hash_indexes + 302);
      break;
    case 0x172:
      result = (_BYTE *)(elf_gnu_hash_indexes + 303);
      break;
    case 0x173:
      result = (_BYTE *)(elf_gnu_hash_indexes + 304);
      break;
    case 0x174:
      result = (_BYTE *)(elf_gnu_hash_indexes + 305);
      break;
    case 0x175:
      result = (_BYTE *)(elf_gnu_hash_indexes + 306);
      break;
    case 0x176:
      result = (_BYTE *)(elf_gnu_hash_indexes + 307);
      break;
    case 0x177:
      result = (_BYTE *)(elf_gnu_hash_indexes + 308);
      break;
    case 0x178:
      result = (_BYTE *)(elf_gnu_hash_indexes + 309);
      break;
    case 0x179:
      result = (_BYTE *)(elf_gnu_hash_indexes + 310);
      break;
    case 0x17A:
      result = (_BYTE *)(elf_gnu_hash_indexes + 311);
      break;
    case 0x17B:
      result = (_BYTE *)(elf_gnu_hash_indexes + 312);
      break;
    case 0x17C:
      result = (_BYTE *)(elf_gnu_hash_indexes + 313);
      break;
    case 0x17D:
      result = (_BYTE *)(elf_gnu_hash_indexes + 314);
      break;
    case 0x17E:
      result = (_BYTE *)(elf_gnu_hash_indexes + 315);
      break;
    case 0x17F:
      result = (_BYTE *)(elf_gnu_hash_indexes + 316);
      break;
    case 0x180:
      result = (_BYTE *)(elf_gnu_hash_indexes + 317);
      break;
    case 0x181:
      result = (_BYTE *)(elf_gnu_hash_indexes + 318);
      break;
    case 0x182:
      result = (_BYTE *)(elf_gnu_hash_indexes + 319);
      break;
    case 0x183:
      result = (_BYTE *)(elf_gnu_hash_indexes + 320);
      break;
    case 0x184:
      result = (_BYTE *)(elf_gnu_hash_indexes + 321);
      break;
    case 0x185:
      result = (_BYTE *)(elf_gnu_hash_indexes + 322);
      break;
    case 0x186:
      result = (_BYTE *)(elf_gnu_hash_indexes + 323);
      break;
    case 0x187:
      result = (_BYTE *)(elf_gnu_hash_indexes + 324);
      break;
    case 0x188:
      result = (_BYTE *)(elf_gnu_hash_indexes + 325);
      break;
    case 0x189:
      result = (_BYTE *)(elf_gnu_hash_indexes + 326);
      break;
    case 0x18A:
      result = (_BYTE *)(elf_gnu_hash_indexes + 327);
      break;
    case 0x18B:
      result = (_BYTE *)(elf_gnu_hash_indexes + 328);
      break;
    case 0x18C:
      result = (_BYTE *)(elf_gnu_hash_indexes + 329);
      break;
    case 0x18D:
      result = (_BYTE *)(elf_gnu_hash_indexes + 330);
      break;
    case 0x18E:
      result = (_BYTE *)(elf_gnu_hash_indexes + 331);
      break;
    case 0x18F:
      result = (_BYTE *)(elf_gnu_hash_indexes + 332);
      break;
    case 0x190:
      result = (_BYTE *)(elf_gnu_hash_indexes + 333);
      break;
    case 0x191:
      result = (_BYTE *)(elf_gnu_hash_indexes + 334);
      break;
    case 0x192:
      result = (_BYTE *)(elf_gnu_hash_indexes + 335);
      break;
    case 0x193:
      result = (_BYTE *)(elf_gnu_hash_indexes + 336);
      break;
    case 0x194:
      result = (_BYTE *)(elf_gnu_hash_indexes + 337);
      break;
    case 0x195:
      result = (_BYTE *)(elf_gnu_hash_indexes + 338);
      break;
    case 0x196:
      result = (_BYTE *)(elf_gnu_hash_indexes + 339);
      break;
    case 0x197:
      result = (_BYTE *)(elf_gnu_hash_indexes + 340);
      break;
    case 0x198:
      result = (_BYTE *)(elf_gnu_hash_indexes + 341);
      break;
    case 0x199:
      result = (_BYTE *)(elf_gnu_hash_indexes + 342);
      break;
    case 0x19A:
      result = (_BYTE *)(elf_gnu_hash_indexes + 343);
      break;
    case 0x19B:
      result = (_BYTE *)(elf_gnu_hash_indexes + 344);
      break;
    case 0x19C:
      result = (_BYTE *)(elf_gnu_hash_indexes + 345);
      break;
    case 0x19D:
      result = (_BYTE *)(elf_gnu_hash_indexes + 346);
      break;
    case 0x19E:
      result = (_BYTE *)(elf_gnu_hash_indexes + 347);
      break;
    case 0x19F:
      result = (_BYTE *)(elf_gnu_hash_indexes + 348);
      break;
    case 0x1A0:
      result = (_BYTE *)(elf_gnu_hash_indexes + 349);
      break;
    case 0x1A1:
      result = (_BYTE *)(elf_gnu_hash_indexes + 350);
      break;
    case 0x1A2:
      result = (_BYTE *)(elf_gnu_hash_indexes + 351);
      break;
    case 0x1A3:
      result = (_BYTE *)(elf_gnu_hash_indexes + 352);
      break;
    case 0x1A4:
      result = (_BYTE *)(elf_gnu_hash_indexes + 353);
      break;
    case 0x1A5:
      result = (_BYTE *)(elf_gnu_hash_indexes + 354);
      break;
    case 0x1A6:
      result = (_BYTE *)(elf_gnu_hash_indexes + 355);
      break;
    case 0x1A7:
      result = (_BYTE *)(elf_gnu_hash_indexes + 356);
      break;
    case 0x1A8:
      result = (_BYTE *)(elf_gnu_hash_indexes + 357);
      break;
    case 0x1A9:
      result = (_BYTE *)(elf_gnu_hash_indexes + 358);
      break;
    case 0x1AA:
      result = (_BYTE *)(elf_gnu_hash_indexes + 359);
      break;
    case 0x1AB:
      result = (_BYTE *)(elf_gnu_hash_indexes + 360);
      break;
    case 0x1AC:
      result = (_BYTE *)(elf_gnu_hash_indexes + 361);
      break;
    case 0x1AD:
      result = (_BYTE *)(elf_gnu_hash_indexes + 362);
      break;
  }
  return result;
}

